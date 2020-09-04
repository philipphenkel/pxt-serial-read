#include "pxt.h"

using namespace pxt;

namespace serial {

//%
int read() {
    int res = uBit.serial.read(MicroBitSerialMode::ASYNC);
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