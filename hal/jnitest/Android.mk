LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := libjnireal

LOCAL_SRC_FILES:=jnitest.cpp
LOCAL_C_INCLUDES := $(TOP)/vendor/test/hal/include/
LOCAL_SHARED_LIBRARIES := liblog \
	libandroid_runtime

include $(BUILD_SHARED_LIBRARY)