
#ifndef BITMAP_H
#define BITMAP_H

using xod::XColor;

/*
 * A structure to hold basic bitmap parameters.
 */
struct Bitmap {
    Bitmap(uint8_t* newBuffer = nullptr, uint8_t newColorDepth = 0, uint16_t newWidth = 0, uint16_t newHeight = 0) {
        buffer = newBuffer;
        colorDepth = newColorDepth;
        width = newWidth;
        height = newHeight;
    }

    uint8_t* buffer;
    uint8_t colorDepth; // 0 = Black and white bitmap, 1 = Colored bitmap, 2 = Colored bitmap with mask color;
    uint16_t width;
    uint16_t height;
    XColor alphaColor;
};

#endif // BITMAP_H
