LOCAL_PATH := $(call my-dir)
include $(LOCAL_PATH)/../common.mk

include $(CLEAR_VARS)
LOCAL_MODULE              := libgpu_tonemapper
LOCAL_VENDOR_MODULE       := true
LOCAL_MODULE_TAGS         := optional
LOCAL_HEADER_LIBRARIES    := display_headers
LOCAL_SHARED_LIBRARIES    := libEGL libGLESv2 libGLESv3 libui libutils liblog
LOCAL_ADDITIONAL_DEPENDENCIES := $(common_deps) $(kernel_deps)
LOCAL_CFLAGS              := $(version_flag) -Wno-missing-field-initializers -Wall \
                             -Wno-unused-parameter -DLOG_TAG=\"GPU_TONEMAPPER\"
# LineageOS 23.2 does not stage these legacy Qualcomm UAPI headers in
# KERNEL_OBJ/usr/include.  Search the kernel source only after Bionic's
# user-space headers so generic linux/types.h remains the libc version.
LOCAL_CFLAGS              += -idirafter $(TOP)/$(TARGET_KERNEL_SOURCE)/include/uapi \
                             -idirafter $(TOP)/$(TARGET_KERNEL_SOURCE)/drivers/staging/android/uapi

LOCAL_SRC_FILES           := TonemapFactory.cpp \
                             glengine.cpp \
                             EGLImageBuffer.cpp \
                             EGLImageWrapper.cpp \
                             Tonemapper.cpp

include $(BUILD_SHARED_LIBRARY)
