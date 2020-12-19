#include <stdio.h>

int main()
{
  int c;
  int count;

  count = 0;

  while ((c = getchar()) != '\n'){
    if (c == ' '){
      ++count;
      if (count == 1){
        putchar(c);
      }
    }
    if (c != ' '){
      putchar(c);
      count = 0;
    }
  }
}