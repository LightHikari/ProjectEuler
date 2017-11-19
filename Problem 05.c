/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include "stdio.h"

int main(){
  int i, test, n = 0, result = 0, len = 0;

  while(!result){
    n += 1;
    for(i = 1; i <=20; i++){
      if(n % i == 0){
        len += 1;
        test = n;
      }
    }
    if(len == 20){
      result += test;
    }
    else{
      len = 0;
    }
  }


  printf("%d\n", result);
  return 0;
}

//232792560
//[Finished in 27.186s]
