

#ifndef GRAPHIC_VENDOE_H
#define GRAPHIC_VENDOE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    /*
     * 0x100 - 0x1FF
     *
     * This range is reserved for pixel formats that are specific to the HAL
     * implementation.  Implementations can use any value in this range to
     * communicate video pixel formats between their HAL modules.  These formats
     * must not have an alpha channel.  Additionally, an EGLimage created from a
     * gralloc buffer of one of these formats must be supported for use with the
     * GL_OES_EGL_image_external OpenGL ES extension.
     */
    HAL_PIXEL_FORMAT_AW_NV12           = 0x101,
    HAL_PIXEL_FORMAT_AW_MB420          = 0x102,
    HAL_PIXEL_FORMAT_AW_MB411          = 0x103,
    HAL_PIXEL_FORMAT_AW_MB422          = 0x104,
    HAL_PIXEL_FORMAT_AW_YUV_PLANNER420 = 0x105, // YU12
    HAL_PIXEL_FORMAT_AW_YVU_PLANNER420 = 0x106, // YV12
    HAL_PIXEL_FORMAT_AW_NV21           = 0x107, /* HAL_PIXEL_FORMAT_YCrCb_420_SP should be used instead. */

    HAL_PIXEL_FORMAT_AW_NV12_10bit     = 0x108, /* yuv420: [8bit: yyyy  uvuv] [2bit: yyyy uvuv] */
    HAL_PIXEL_FORMAT_AW_NV21_10bit     = 0x109, /* yuv420: [8bit: yyyy  vuvu] [2bit: yyyy uvuv] */
    HAL_PIXEL_FORMAT_AW_YV12_10bit     = 0x10A, /* yuv420: [8bit: yyyy  vv uu] [2bit: yyyy uvuv] */
    HAL_PIXEL_FORMAT_AW_I420_10bit     = 0x10B, /* yuv420: [8bit: yyyy  uu vv] [2bit: yyyy uvuv] */

    HAL_PIXEL_FORMAT_AW_P010_UV        = 0x10C, /* Planar, 4:2:0, 10bit, (yyyy, uvuv) */
    HAL_PIXEL_FORMAT_AW_P010_VU        = 0x10D, /* Planar, 4:2:0, 10bit, (yyyy, vuvu) */
    HAL_PIXEL_FORMAT_AW_P210_UV        = 0x10E, /* Planar, 4:2:2, 10bit, (yyyy, uvuv) */
    HAL_PIXEL_FORMAT_AW_P210_VU        = 0x10F, /* Planar, 4:2:2, 10bit, (yyyy, vuvu) */
} vendor_pixel_format_t;

#ifdef __cplusplus
}
#endif

#endif
