#include "pxt.h"

using namespace pxt;

namespace serial {

    //%
    int readChar(MicroBitSerialMode mode) {
        int res = uBit.serial.read(mode);
        if(res == MICROBIT_NO_DATA) {
            return -1;
        } else {
            return res;
        }
    }

    //%
    int available() {
        return uBit.serial.txBufferedSize();
    }  
}