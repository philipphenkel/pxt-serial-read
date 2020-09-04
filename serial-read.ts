namespace serial {

  /**
  * Returns the first byte from the RX buffer or -1 if no data is available.
  */
  //% shim=serial::read
  export function read(): number  { return -1 }


  /**
  * Returns the number of currently available bytes in the RX buffer.
  */
  //% shim=serial::available
  export function available(): number { return 0 }
}