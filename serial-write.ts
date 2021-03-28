namespace serial {

    /**
    * Writes a text to the serial device. 
    */
    //% shim=serial::writeStringBlocking
    export function writeStringBlocking(text: string): number { return -1 }

    /**
    * Writes a buffer to the serial device. 
    */
    //% shim=serial::writeBufferBlocking
    export function writeBufferBlocking(buffer: Buffer): number { return -1 }
}