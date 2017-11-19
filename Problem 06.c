/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include "stdio.h"

int main(){
  int i, result, square_sum = 0, sum_square = 0;

  for(i = 1; i <= 100; i++){
    square_sum += i;
    sum_square += (i * i);
  }

  result = (square_sum * square_sum) - sum_square;

  printf("%d\n", result);

  return 0;
}

//25164150
//[Finished in 0.154s]
