const enum SerialMode {
  ASYNC = 0,
  SYNC_SPINWAIT = 1, 
  SYNC_SLEEP = 2
}

namespace serial {
  //% shim=serial::readChar
  export function readChar(mode: SerialMode): number  { return -1 }
  export function available(): number { return 0 }
  export function isReadable(): number { return 5 }
}