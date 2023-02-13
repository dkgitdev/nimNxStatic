import logging
let consoleLogger = newConsoleLogger()
addHandler(consoleLogger)

proc sayHello*(): void {.exportc.} = error("not eough imagination!")