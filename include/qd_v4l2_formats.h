/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Qualcomm V4L2 pixel formats from the sdm660 kernel UAPI.
 * Copyright (C) 1999-2012 the contributors
 * Keep the vendor ABI values while using Bionic's generic V4L2 declarations.
 */
#ifndef QD_V4L2_FORMATS_H
#define QD_V4L2_FORMATS_H

#include <linux/videodev2.h>

#ifndef V4L2_PIX_FMT_RGBA8888_UBWC
#define V4L2_PIX_FMT_RGBA8888_UBWC v4l2_fourcc('Q', 'R', 'G', 'B')
#endif
#ifndef V4L2_PIX_FMT_NV12_UBWC
#define V4L2_PIX_FMT_NV12_UBWC v4l2_fourcc('Q', '1', '2', '8')
#endif
#ifndef V4L2_PIX_FMT_NV12_TP10_UBWC
#define V4L2_PIX_FMT_NV12_TP10_UBWC v4l2_fourcc('Q', '1', '2', 'A')
#endif
#ifndef V4L2_PIX_FMT_NV12_P010_UBWC
#define V4L2_PIX_FMT_NV12_P010_UBWC v4l2_fourcc('Q', '1', '2', 'B')
#endif
#ifndef V4L2_PIX_FMT_SDE_ABGR_8888
#define V4L2_PIX_FMT_SDE_ABGR_8888 v4l2_fourcc('R', 'A', '2', '4')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBA_8888
#define V4L2_PIX_FMT_SDE_RGBA_8888 v4l2_fourcc('A', 'B', '2', '4')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBX_8888
#define V4L2_PIX_FMT_SDE_RGBX_8888 v4l2_fourcc('X', 'B', '2', '4')
#endif
#ifndef V4L2_PIX_FMT_SDE_XBGR_8888
#define V4L2_PIX_FMT_SDE_XBGR_8888 v4l2_fourcc('R', 'X', '2', '4')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBA_5551
#define V4L2_PIX_FMT_SDE_RGBA_5551 v4l2_fourcc('R', 'A', '1', '5')
#endif
#ifndef V4L2_PIX_FMT_SDE_ABGR_1555
#define V4L2_PIX_FMT_SDE_ABGR_1555 v4l2_fourcc('A', 'B', '1', '5')
#endif
#ifndef V4L2_PIX_FMT_SDE_BGRA_5551
#define V4L2_PIX_FMT_SDE_BGRA_5551 v4l2_fourcc('B', 'A', '1', '5')
#endif
#ifndef V4L2_PIX_FMT_SDE_BGRX_5551
#define V4L2_PIX_FMT_SDE_BGRX_5551 v4l2_fourcc('B', 'X', '1', '5')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBX_5551
#define V4L2_PIX_FMT_SDE_RGBX_5551 v4l2_fourcc('R', 'X', '1', '5')
#endif
#ifndef V4L2_PIX_FMT_SDE_XBGR_1555
#define V4L2_PIX_FMT_SDE_XBGR_1555 v4l2_fourcc('X', 'B', '1', '5')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBA_4444
#define V4L2_PIX_FMT_SDE_RGBA_4444 v4l2_fourcc('R', 'A', '1', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_BGRA_4444
#define V4L2_PIX_FMT_SDE_BGRA_4444 v4l2_fourcc('b', 'A', '1', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_ABGR_4444
#define V4L2_PIX_FMT_SDE_ABGR_4444 v4l2_fourcc('A', 'B', '1', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBX_4444
#define V4L2_PIX_FMT_SDE_RGBX_4444 v4l2_fourcc('R', 'X', '1', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_BGRX_4444
#define V4L2_PIX_FMT_SDE_BGRX_4444 v4l2_fourcc('B', 'X', '1', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_XBGR_4444
#define V4L2_PIX_FMT_SDE_XBGR_4444 v4l2_fourcc('X', 'B', '1', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_BGR_565
#define V4L2_PIX_FMT_SDE_BGR_565 v4l2_fourcc('B', 'G', '1', '6')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CR_CB_GH2V2
#define V4L2_PIX_FMT_SDE_Y_CR_CB_GH2V2 v4l2_fourcc('Y', 'U', '4', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CBCR_H1V2
#define V4L2_PIX_FMT_SDE_Y_CBCR_H1V2 v4l2_fourcc('N', 'H', '1', '6')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CRCB_H1V2
#define V4L2_PIX_FMT_SDE_Y_CRCB_H1V2 v4l2_fourcc('N', 'H', '6', '1')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_VENUS
#define V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_VENUS v4l2_fourcc('Q', 'N', 'V', '2')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CRCB_H2V2_VENUS
#define V4L2_PIX_FMT_SDE_Y_CRCB_H2V2_VENUS v4l2_fourcc('Q', 'N', 'V', '1')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBX_8888_UBWC
#define V4L2_PIX_FMT_SDE_RGBX_8888_UBWC v4l2_fourcc('Q', 'X', 'B', '4')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGB_565_UBWC
#define V4L2_PIX_FMT_SDE_RGB_565_UBWC v4l2_fourcc('Q', 'R', 'G', '6')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBA_1010102
#define V4L2_PIX_FMT_SDE_RGBA_1010102 v4l2_fourcc('A', 'B', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBX_1010102
#define V4L2_PIX_FMT_SDE_RGBX_1010102 v4l2_fourcc('X', 'B', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_ARGB_2101010
#define V4L2_PIX_FMT_SDE_ARGB_2101010 v4l2_fourcc('A', 'R', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_XRGB_2101010
#define V4L2_PIX_FMT_SDE_XRGB_2101010 v4l2_fourcc('X', 'R', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_BGRA_1010102
#define V4L2_PIX_FMT_SDE_BGRA_1010102 v4l2_fourcc('B', 'A', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_BGRX_1010102
#define V4L2_PIX_FMT_SDE_BGRX_1010102 v4l2_fourcc('B', 'X', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_ABGR_2101010
#define V4L2_PIX_FMT_SDE_ABGR_2101010 v4l2_fourcc('R', 'A', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_XBGR_2101010
#define V4L2_PIX_FMT_SDE_XBGR_2101010 v4l2_fourcc('R', 'X', '3', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBA_1010102_UBWC
#define V4L2_PIX_FMT_SDE_RGBA_1010102_UBWC v4l2_fourcc('Q', 'R', 'B', 'A')
#endif
#ifndef V4L2_PIX_FMT_SDE_RGBX_1010102_UBWC
#define V4L2_PIX_FMT_SDE_RGBX_1010102_UBWC v4l2_fourcc('Q', 'X', 'B', 'A')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_TP10
#define V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_TP10 v4l2_fourcc('T', 'P', '1', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_P010
#define V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_P010 v4l2_fourcc('P', '0', '1', '0')
#endif
#ifndef V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_P010_VENUS
#define V4L2_PIX_FMT_SDE_Y_CBCR_H2V2_P010_VENUS v4l2_fourcc('Q', 'P', '1', '0')
#endif

#endif  // QD_V4L2_FORMATS_H
