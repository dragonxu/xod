
struct State {
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto bitmap = getValue<input_IN>(ctx);

    if (bitmap->colorDepth > 0) {
        bitmap->alphaColor = getValue<input_MSK>(ctx);
        bitmap->colorDepth = 2;
    }

    emitValue<output_OUT>(ctx, bitmap);
}
