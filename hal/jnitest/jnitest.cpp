#include "jnitest.h"
#include <stdio.h>
#include "android/log.h"
#include "android_runtime/AndroidRuntime.h"

using namespace android;

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG ,__VA_ARGS__)

void Jni_printLog() {
    LOGI("jni test");
}