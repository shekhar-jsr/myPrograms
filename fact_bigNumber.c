#include <stdio.h>
#include <string.h>
#include <math.h>

void Mult(char *BigNum, unsigned Factor) {
  unsigned Accumulator = 0;
  char Digit;
  while ((Digit = *BigNum) != '\0') {
    Accumulator += ((unsigned)(Digit - '0')) * Factor;
    *BigNum++ = Accumulator%10 + '0';
    Accumulator /= 10;
  }
  while (Accumulator > 0) {
    *BigNum++ = Accumulator%10 + '0';
    Accumulator /= 10;
  }
  *BigNum = '\0';
}

int main(){
  unsigned N = 500;
  unsigned Factor;
  char BigNum[(size_t) (N*log(N) + 2)];  // Form answer, in reverse order, as a string
  strcpy(BigNum, "1");
  for (Factor = 1; Factor <= N; Factor++) {
    Mult(BigNum, Factor);
  }
  printf("%u! Length:%zu Reverse:\"%s\"\n", Factor - 1, strlen(BigNum), BigNum);
  unsigned long Sum = 0;
  size_t i;
  for (i=0; BigNum[i]; i++) {
    Sum += BigNum[i] - '0';
  }
  printf("Sum of digits:%lu\n", Sum);
  return 0;
}
