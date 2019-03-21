package com.example.jnitest;

public class JniTest {

    static {
        System.loadLibrary("jnitest");
    }

    public JniTest() {}

    public void printLog() {
        native_printLog();
    }

    private native native_printLog();
}