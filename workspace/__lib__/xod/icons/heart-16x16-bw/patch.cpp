
static const unsigned char heart_icon16x16bw[] PROGMEM = {

0b00000000, 0b00000000, //
0b00000000, 0b00000000, //
0b00111100, 0b01111000, //   ####   ####
0b01111110, 0b11111100, //  ###### ######
0b11111111, 0b11111110, // ###############
0b11111111, 0b11111110, // ###############
0b11111111, 0b11111110, // ###############
0b11111111, 0b11111110, // ###############
0b01111111, 0b11111100, //  #############
0b01111111, 0b11111100, //  #############
0b00111111, 0b11111000, //   ###########
0b00011111, 0b11110000, //    #########
0b00001111, 0b11100000, //     #######
0b00000111, 0b11000000, //      #####
0b00000011, 0b10000000, //       ###
0b00000001, 0b00000000, //    	  #

};

struct State {
    uint8_t mem[sizeof(Bitmap)];
    Bitmap* myBitmap;
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto state = getState(ctx);
    state->myBitmap = new Bitmap(heart_icon16x16bw, 0, 16, 16);
    emitValue<output_BMP>(ctx, state->myBitmap);
}
