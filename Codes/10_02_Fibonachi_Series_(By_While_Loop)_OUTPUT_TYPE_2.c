#include <stdio.h>

//////////////////This program gives us series whose sum of last two terms is not exceeds the value of n that we enter...
///////////////// i entered 81
              //  so Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
              //  34+55 > 81 
              //  so series stops to form.........
              // so total terms in series NOT COMPULSORY to always have equal to the number we enter.......

int main() 
{
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  // displays the first two terms which is always 0 and 1
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  nextTerm = t1 + t2;

  while (nextTerm <= n)
  //while (nextTerm <n) .....this will give different output like 20th programm
   {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}