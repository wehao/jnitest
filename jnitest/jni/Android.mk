LOCAL_PATH := $(call mydir)
include $(CLEAR_VARS)

LOCAL_MODULE := libjnitest
LOCAL_SRC_FILES := android_media_jnitest.cpp
LOCAL_C_INCLUDES := $(TOP)/hal/include/jnitest.h

include $(BUILD_SHARED_LIBRARY)
