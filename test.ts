const b = serial.read()
const avail = serial.available()
let bytesWritten = serial.writeStringBlocking("test");
const buf = pins.createBuffer(5);
bytesWritten = serial.writeBufferBlocking(buf);
