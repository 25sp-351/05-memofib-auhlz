#include <stdio.h>

#include "fib.h"

extern long_func_ptr fibonacci_provider;
// Main function
int main(int argc, char *argv[]) {

  // Initialize the memoized Fibonacci function
  fibonacci_provider = init_cache(fibonacci);

  // Compute and print Fibonacci values
  
  //for (int ix = 0; ix <= 100; ix++) {
  //  printf(__FILE__ ":%2d   fibonacci(%d) = %lld\n", __LINE__, ix,
  //         (*fibonacci_provider)(ix));
  //}

  for (int ix=0; ix <= 91; ix++) {
    printf(__FILE__ ":%2d   fibonacci of %d is %lld\n",__LINE__,
        ix,
        (*fibonacci_provider)(ix)
    );
}

  return 0;
}