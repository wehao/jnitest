LOCAL_PATH := $(call mydir)
include $(CLEAR_VARS)

LOCAL_MODULE := libjnireal

# LOCAL_SRC_FILES:=jnitest.cpp
LOCAL_SRC_FILES := $(call all-cfiles-under, $(LOCAL_PATH))
LOCAL_C_INCLUDES := $(TOP)/include/jnitest.h

include $(BUILD_SHARED_LIBRARY)