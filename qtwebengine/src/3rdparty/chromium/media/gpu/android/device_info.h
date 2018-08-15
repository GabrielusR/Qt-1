// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_GPU_ANDROID_DEVICE_INFO_H_
#define MEDIA_GPU_ANDROID_DEVICE_INFO_H_

#include "media/base/video_codecs.h"

namespace media {
class MediaCodecBridge;

// Info about the current platform and device with caching of the results that
// don't change. Virtual for testing.
struct DeviceInfo {
  static DeviceInfo* GetInstance();

  virtual int SdkVersion();
  virtual bool IsVp8DecoderAvailable();
  virtual bool IsVp9DecoderAvailable();
  virtual bool IsDecoderKnownUnaccelerated(VideoCodec codec);
  virtual bool IsSetOutputSurfaceSupported();
  virtual bool SupportsOverlaySurfaces();
  virtual bool CodecNeedsFlushWorkaround(MediaCodecBridge* codec);
};

}  // namespace media

#endif  // MEDIA_GPU_ANDROID_DEVICE_INFO_H_