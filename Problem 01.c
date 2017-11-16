/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int main(){
  int a, result = 0;

  for (a = 1; a < 1000; a++){
    if (a % 3 == 0 || a % 5 == 0){
      result += a;
    }
  }
  printf("%d\n", result);
  return 0;
}

//233168
//[Finished in 0.175s]
