LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := libjnitest
LOCAL_SRC_FILES := android_media_jnitest.cpp
LOCAL_C_INCLUDES := $(TOP)/vendor/test/hal/include/
LOCAL_SHARED_LIBRARIES := libjnireal \
	libandroid_runtime \
	liblog  \

include $(BUILD_SHARED_LIBRARY)
