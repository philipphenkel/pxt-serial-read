#include "pxt.h"

using namespace pxt;

namespace serial {

/**
 * Consumes a single character from the serial read buffer.
 * @param mode the. eg: ASYNC
 *            ASYNC - A character is read from the serial read buffer if available, if there
 *                    are no characters to be read, a value of zero is returned immediately.
 *
 *            SYNC_SPINWAIT - A character is read from the serial read buffer if available, if there
 *                            are no characters to be read, this method will spin
 *                            (lock up the processor) until a character is available.
 *
 *            SYNC_SLEEP - A character is read from the serial read buffer if available, if there
 *                         are no characters to be read, the calling fiber sleeps
 *                         until there is a character available.
 * @return  a character, or -1 if there are no characters in the buffer.
 */
//%
int readChar(MicroBitSerialMode mode) {
    int res = uBit.serial.read(mode);
    if (res >= 0) {
        return res;
    } else {
        return -1;
    }
}

/**
 * Returns the currently buffered number of characters in the serial read buffer.
 * @return number characters available
 */
//%
int available() {
    return uBit.serial.rxBufferedSize();
}

} // namespace serial