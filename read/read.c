#include <stdio.h>

main()
{
  int c;

  c = getChar();
  while(c != EOF) {
    putChar(c);
    c = getChar();
  }
}
