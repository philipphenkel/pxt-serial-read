const enum SerialMode {
  ASYNC = 0,
  SYNC_SPINWAIT = 1, 
  SYNC_SLEEP = 2
}

namespace serial {
  //% shim=serial::readChar
  export function readChar(mode: SerialMode): number  { return -1 }

  //% shim=serial::available
  export function available(): number { return 0 }
}