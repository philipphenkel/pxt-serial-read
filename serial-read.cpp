#include "pxt.h"

using namespace pxt;

namespace serial {

//%
int readChar(MicroBitSerialMode mode) {
    int res = uBit.serial.read(mode);
    if (res >= 0) {
        return res;
    } else {
        return -1;
    }
}

//%
int available() {
    return uBit.serial.rxBufferedSize();
}

} // namespace serial