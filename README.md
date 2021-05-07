# StrCrypt
Compile-time string crypter library for C++

- Having plain strings stored in the binary file or in memory can help reversering attempts to be much easier.
- If the program is targeted by string detection scans you had to change the strings everytime you get detected.

example
```
#include "movstr.h"

void main() {
  char buf[256];
  MovStr(buf, "TestString");  //"TestString" does not remain in .rdata section anymore.
  printf(buf);
}
```

- Binary not encrypted(substitute "MovStr" to "strcpy")
![0](https://user-images.githubusercontent.com/32794121/117446996-e271a600-af77-11eb-8b9e-ca663e557cd4.jpg)
- Binary encrypted with STRDEF_RAW
![1](https://user-images.githubusercontent.com/32794121/117447059-f3bab280-af77-11eb-8cd9-eeeee7cea663.jpg)
- Binary encrypted with STRDEF_ENCRYPT_KEY1
![2](https://user-images.githubusercontent.com/32794121/117447077-fae1c080-af77-11eb-8b9b-b021dbe7deed.jpg)
- Binary encrypted with STRDEF_ENCRYPT_KEY2
![3](https://user-images.githubusercontent.com/32794121/117447084-ff0dde00-af77-11eb-9e97-467ed6b72fc8.jpg)

