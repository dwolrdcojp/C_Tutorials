#include <stdio.h>

int fct(int l, int u, int s);

int main()
{
  int lower = 20;
  int upper = 100;
  int step = 10;

  fct(lower,upper,step);
  return 0;
}

/* function */
int fct(int l, int u, int s)
{
  int fahr, p;

  for (fahr = l; fahr <= u; fahr = fahr + s)
    p = printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  return p;
}