#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */


int main()
{
  /* read input from keyboard */
  /* detect separate words */
  /* print each word on new line */

  int c, state;

  state = OUT;
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      putchar('\n');
    else {
      putchar(c);
    }
  }
}