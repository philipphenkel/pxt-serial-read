#include "pxt.h"

using namespace pxt;

namespace serial {

//%
int write(String text) {
    if (!text) {
        return MICROBIT_INVALID_PARAMETER;
    }
    return uBit.serial.send(MSTR(text), MicroBitSerialMode::SYNC_SPINWAIT);
}

} // namespace serial