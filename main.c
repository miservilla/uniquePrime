#include <stdio.h>
#define UL unsigned long

UL prime(UL);
UL multiplier(UL);

void main ( void )
{
  unsigned long m = 126;/*modulus, 0 < m.*/
  unsigned long a = multiplier(m);/*multiplier, 0 < a < m.*/
  unsigned long c = 25;/*increment, 0 <= c < m.*/
  unsigned long x = c;/*seed, 0 <= xsub0 < m.*/

  int i ;
  for ( i =1; i <=10; i ++)
  {
    printf ("%lu\n", x );
    x = ( a * x + c ) % m ;
  }
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
UL multiplier(UL m)
{
  if(prime(m) % 4 == 0)
  {
    return 1 + 2 * (prime(m));
  }
  return 1 + (prime(m));
}