#include <stdio.h>
#define UL unsigned long

UL prime(UL);

void main()
{
  printf("%lu",prime(4));
}

UL prime(UL n)
{
  UL divisor = 2;
  UL product = 1;
  UL primeFactor = 1;
  if(n == 1)
  {
    return 0;
  }
  while(n >= divisor * divisor)
  {
    while(n % divisor == 0)
    {
      n = n / divisor;
      primeFactor = divisor;
    }
    product *= primeFactor;
    primeFactor = 1;
    divisor++;
  }
  return product * n;
}