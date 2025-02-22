#ifndef FIB_H
#define FIB_H

typedef unsigned long long (*long_func_ptr)(int param);

unsigned long long fibonacci(int of_num);

unsigned long long cache_func(int of_num);

long_func_ptr init_cache(long_func_ptr real_provider);

#endif