#include <stdio.h>

int main(void)
{
  int N, i, count;
  scanf("%i", &N);
  while (N--)
  {
    count = 0;
    scanf("%i", &i);
    while (i)
    {
      count += i / 5;
      i /= 5;
    }
    printf("%i\n", count);
  }
  return 0;
}
