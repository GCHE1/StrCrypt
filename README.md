# StrCrypt
Compile-time string crypter library for C++

- Having plain strings stored in the binary file or in memory can help reversering attempts to be much easier.
- If the program is targeted by string detection scans you had to change the strings everytime you get detected.

Include movstr.h
```
#include "movstr.h"

void main() {
  char buf[256];
  MovStr(buf, "TestString\n");  //"TestString" does not remain in .rdata section anymore.
  printf(buf);
}
```
