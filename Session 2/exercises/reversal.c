// compile with clang reversal.c -o reversal -lm

#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// from
// https://stackoverflow.com/questions/1068849/how-do-i-determine-the-number-of-digits-of-an-integer-in-c
int numDigits(int n);

// To improve:
// Allow negative numbers
// Input checking
// What if the int is too big?

int main(void) {

  int n;

  printf("Enter a positive integer between 2 and 9 digits: ");
  scanf("%d", &n);

  // two digits
  // int reversed = (n % 10) * 10 + (n / 10);

  // three digits
  // int reversed = (n % 10) * 100;
  // n /= 10;
  // reversed += (n % 10) * 10 + (n / 10);

  // N digits
  // get number of digits
  int digits = numDigits(n);

  // printf("digits is %d\n", digits);

  int reversed = 0;

  for (size_t i = digits; i > 1; --i) {
    reversed += (n % 10) * pow(10, i - 1);
    n /= 10;
  }

  reversed += n;

  printf("The reversal is %d\n", reversed);

  return EXIT_SUCCESS;
}

int numDigits(int n) {
  if (n < 0)
    return numDigits((n == INT_MIN) ? INT_MAX : -n);
  if (n < 10)
    return 1;
  return 1 + numDigits(n / 10);
}
