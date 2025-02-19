#include <stdio.h>

#include "fib.h"

extern long_func_ptr fibonacci_provider;
// Main function
int main(int argc, char *argv[]) {
  int test_val;

  if (argc < 2 || 1 != sscanf(argv[1], "%d", &test_val) || test_val < 0)
    return 1;

  // Initialize the memoized Fibonacci function
  fibonacci_provider = init_cache(fibonacci);

  // Compute and print Fibonacci values
  for (int ix = 0; ix <= test_val; ix++) {
    printf(__FILE__ ":%2d   fibonacci(%d) = %ld\n", __LINE__, ix,
           (*fibonacci_provider)(ix));
  }
  for (int ix=0; ix < test_val+1; ix++) {
    printf(__FILE__ ":%2d   fibonacci of %d is %ld\n",__LINE__,
        ix,
        (*fibonacci_provider)(ix)
    );
}

  return 0;
}