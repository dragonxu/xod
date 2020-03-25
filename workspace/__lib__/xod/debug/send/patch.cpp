#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_SEND
#pragma XOD error_raise enable

struct State {
};

// clang-format off
{{ GENERATED_CODE }}
// clang-format on

void evaluate(Context ctx) {
    if (!isInputDirty<input_SEND>(ctx))
        return;

    auto req = getValue<input_MSG>(ctx);
    auto inet = getValue<input_INET>(ctx);

    emitValue<output_INETU0027>(ctx, inet);
    if (inet->send(req)) {
        emitValue<output_DONE>(ctx, 1);
    } else {
        raiseError(ctx);
    }
}
