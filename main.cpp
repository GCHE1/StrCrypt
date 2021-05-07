#include "movstr.h"

void main() {
  char buf[256];
  MovStr(buf, "TestString");  //"TestString" does not remain in .rdata section anymore.
  printf(buf);
}
