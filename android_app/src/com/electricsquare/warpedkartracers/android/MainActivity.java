package com.electricsquare.warpedkartracers.android;

import android.app.Activity;
import android.os.Bundle;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.WindowManager;

public class MainActivity extends Activity {
    private GameEngine engine;
    private SaveManager saveManager;
    private GameView gameView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Keep screen on & Fullscreen
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        hideSystemUI();

        saveManager = new SaveManager(this);
        engine = new GameEngine(this, saveManager);
        gameView = new GameView(this, engine, saveManager);

        setContentView(gameView);
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            hideSystemUI();
        }
    }

    private void hideSystemUI() {
        View decorView = getWindow().getDecorView();
        decorView.setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                | View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                | View.SYSTEM_UI_FLAG_FULLSCREEN
        );
    }

    @Override
    protected void onPause() {
        super.onPause();
        if (saveManager != null) {
            saveManager.save();
        }
    }

    // Android Gamepad / Controller support (ExtendedGamepad)
    @Override
    public boolean onGenericMotionEvent(MotionEvent event) {
        if ((event.getSource() & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK &&
            event.getAction() == MotionEvent.ACTION_MOVE) {

            // Left stick X for steering
            float axisX = event.getAxisValue(MotionEvent.AXIS_X);
            if (Math.abs(axisX) > 0.15f) {
                engine.steerInput = axisX;
            } else {
                engine.steerInput = 0.0f;
            }

            // Right trigger (R2/GAS)
            float rTrigger = event.getAxisValue(MotionEvent.AXIS_RTRIGGER);
            float gas = event.getAxisValue(MotionEvent.AXIS_GAS);
            float throttle = Math.max(rTrigger, gas);
            if (throttle > 0.1f) {
                engine.throttleInput = throttle;
            }

            // Left trigger (L2/BRAKE)
            float lTrigger = event.getAxisValue(MotionEvent.AXIS_LTRIGGER);
            float brake = event.getAxisValue(MotionEvent.AXIS_BRAKE);
            engine.brakeInput = (lTrigger > 0.2f || brake > 0.2f);

            return true;
        }
        return super.onGenericMotionEvent(event);
    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        if ((event.getSource() & InputDevice.SOURCE_GAMEPAD) == InputDevice.SOURCE_GAMEPAD ||
            (event.getSource() & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK) {

            if (keyCode == KeyEvent.KEYCODE_BUTTON_A || keyCode == KeyEvent.KEYCODE_DPAD_UP) {
                engine.throttleInput = 1.0f;
                return true;
            }
            if (keyCode == KeyEvent.KEYCODE_BUTTON_B || keyCode == KeyEvent.KEYCODE_DPAD_DOWN) {
                engine.brakeInput = true;
                return true;
            }
            if (keyCode == KeyEvent.KEYCODE_BUTTON_R1) {
                engine.driftButton = true;
                return true;
            }
            if (keyCode == KeyEvent.KEYCODE_BUTTON_L1 || keyCode == KeyEvent.KEYCODE_BUTTON_X) {
                engine.useItemButton = true;
                return true;
            }
        }
        return super.onKeyDown(keyCode, event);
    }

    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event) {
        if (keyCode == KeyEvent.KEYCODE_BUTTON_A || keyCode == KeyEvent.KEYCODE_DPAD_UP) {
            engine.throttleInput = 0.0f;
            return true;
        }
        if (keyCode == KeyEvent.KEYCODE_BUTTON_B || keyCode == KeyEvent.KEYCODE_DPAD_DOWN) {
            engine.brakeInput = false;
            return true;
        }
        if (keyCode == KeyEvent.KEYCODE_BUTTON_R1) {
            engine.driftButton = false;
            return true;
        }
        if (keyCode == KeyEvent.KEYCODE_BUTTON_L1 || keyCode == KeyEvent.KEYCODE_BUTTON_X) {
            engine.useItemButton = false;
            return true;
        }
        return super.onKeyUp(keyCode, event);
    }
}
