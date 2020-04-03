
static const unsigned char warning_icon16x16bw[] PROGMEM = {

0b00000000, 0b10000000, //         #
0b00000001, 0b11000000, //        ###
0b00000001, 0b11000000, //        ###
0b00000011, 0b11100000, //       #####
0b00000011, 0b01100000, //       ## ##
0b00000111, 0b01110000, //      ### ###
0b00000110, 0b00110000, //      ##   ##
0b00001110, 0b10111000, //     ### # ###
0b00001100, 0b10011000, //     ##  #  ##
0b00011100, 0b10011100, //    ###  #  ###
0b00011000, 0b10001100, //    ##   #   ##
0b00111000, 0b00001110, //   ###       ###
0b00110000, 0b10000110, //   ##    #    ##
0b01111111, 0b11111111, //  ###############
0b01111111, 0b11111111, //  ###############
0b00000000, 0b00000000, //

};

struct State {
    uint8_t mem[sizeof(Bitmap)];
    Bitmap* myBitmap;
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto state = getState(ctx);
    state->myBitmap = new Bitmap(warning_icon16x16bw, 0, 16, 16);
    emitValue<output_BMP>(ctx, state->myBitmap);
}
