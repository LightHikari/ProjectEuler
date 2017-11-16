/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include "stdio.h"
#include "stdbool.h"
#include "math.h"

int main(){
  long num = 600851475143;
  int limit = sqrt(num), i, n, factor;
  int primes[limit];

  for(i = 0; i <= limit; i++){
    primes[i] = true;
  }

  primes[0] = false;
  primes[1] = false;

  for(i = 2; i <= limit; i++){
    if (primes[i]){
      for (n = i * 2; n <= limit; n += i){
        primes[n] = false;
      }
    }
  }

  for(i = 2; i < limit; i++){
    if(primes[i]){
      if(num % i == 0){
        factor = i;
      }
    }
  }

  printf("%d\n", factor);
  return 0;
}
