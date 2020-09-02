const enum SerialMode {
  ASYNC = 0,
  SYNC_SPINWAIT = 1, 
  SYNC_SLEEP = 2
}

namespace serial {

  /**
  * Reads and returns a single character from the serial read buffer. 
  * Returns -1 if the buffer is empty or an error occurred.
  * 
  * @param mode the read mode. eg: SerialMode.ASYNC
  * 
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
  * 
  */
  //% shim=serial::readChar
  export function readChar(mode: SerialMode): number  { return -1 }


  /**
  * Returns the number of currently available characters in the serial read buffer.
  */
  //% shim=serial::available
  export function available(): number { return 0 }
}