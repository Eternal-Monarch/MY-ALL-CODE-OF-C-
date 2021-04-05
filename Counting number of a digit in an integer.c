#include <stdio.h>

int
main ()
{
  int a, count = 0;
  printf ("Enter the number:");
  scanf ("%d", &a);
  while (a != 0)//still the value will not be the equal of the 0(n!0)
    {
      a = a / 10;//everytime divide the value by 10 for finding the count 
    count++;//count is intiliazed by 0.
    //everytime count will be increased one by one still the value will not be equal of 0
        
    }
  printf ("The total Number  %d", count);
  return 0;
}
