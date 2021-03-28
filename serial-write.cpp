#include "pxt.h"

using namespace pxt;

namespace serial {

//%
int writeStringBlocking(String text) {
    if (!text) {
        return MICROBIT_INVALID_PARAMETER;
    }
    return uBit.serial.send(MSTR(text), MicroBitSerialMode::SYNC_SPINWAIT);
}

//%
int writeBufferBlocking(Buffer buffer) {
    if (!buffer) {
        return MICROBIT_INVALID_PARAMETER;
    }
    return uBit.serial.send(buffer->data, buffer->length, MicroBitSerialMode::SYNC_SPINWAIT);
}

} // namespace serial