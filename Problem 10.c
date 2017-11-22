/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include "stdio.h"
#include "stdbool.h"

int main(){
  int i, n;
  int primes[2000000];
  double sum = 0;


  for(i = 2; i < 2000000; i++){
    primes[i] = true;
  }

  primes[0] = false;
  primes[1] = false;

  for(i = 2; i < 2000000; i++){
    if (primes[i]){
      sum += i;
      for (n = i * 2; n < 2000000; n += i){
        primes[n] = false;
      }
    }
  }

  printf("%.0f\n", sum);

  return 0;
}

//142913828922
//[Finished in 0.174s]
