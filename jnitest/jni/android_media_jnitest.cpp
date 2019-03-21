#include <stdio.h>
#include "jnitest.h"
#include "jni.h"
#include "android/log.h"
#include "android_runtime/AndroidRuntime.h"

#ifdef __cplusplus
extern "C" {
#endif

using namespace android;

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG ,__VA_ARGS__)

static const char* class_name = "com/example/jnitest/JniTest";

void android_media_print() {
    LOGI("call1111 android_media_print");
    Jni_printLog();
}

static JNINativeMethod native_method_table[] = {
    {"native_printLog", "()V", (void*) android_media_print}
};

static int registerNativeMethods(JNIEnv* env, const char* className, const JNINativeMethod* jniMethods, int numMethod) {
    AndroidRuntime::registerNativeMethods(env, class_name, jniMethods, numMethod);
    return JNI_TRUE;
}

jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    LOGI("call JNI_OnLoad");
    JNIEnv* env = NULL;
    if (vm->GetEnv((void **) &env, JNI_VERSION_1_4) != JNI_OK) {
        return -1;
    }
    
    registerNativeMethods(env, class_name, native_method_table, sizeof(native_method_table)/sizeof(JNINativeMethod));
    return JNI_VERSION_1_4;
}

#ifdef __cplusplus
}
#endif