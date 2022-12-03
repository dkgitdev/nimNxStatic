proc writeFile*(): void {.exportc.} =
  echo "Hello, press plus to exit!"
  let f = open("some.txt", fmWrite)
  echo "opened"
  f.write("123")
  echo "written"
  f.close()
  echo "closed"
