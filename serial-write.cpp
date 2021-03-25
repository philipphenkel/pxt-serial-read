#include "pxt.h"

using namespace pxt;

namespace serial {

/**
 * Send a piece of text through the serial connection.
 */
int write(String text) {
    if (!text)
        return;
    return uBit.serial.send(MSTR(text), MicroBitSerialMode::SYNC_SPINWAIT);
}

} // namespace serial