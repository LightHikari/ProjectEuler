/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include "stdio.h"

int main(){
  int s = 0, t0 = 0, tn = 1, holder;

  while (tn <= 4000000){
    holder = tn;
    tn += t0;
    t0 = holder;

    if (tn % 2 == 0){
      s += tn;
    }
  }

  printf("%d\n", s);
  return 0;
}

//4613732
//[Finished in 0.235s]
