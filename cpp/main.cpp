#include <iostream>
#include <emscripten/emscripten.h>
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif
  int EMSCRIPTEN_KEEPALIVE fib(int num) {
    if (num == 0) return 1;
    if (num == 1) return 1;
    return fib(num - 1) + fib(num - 2);
  }

#ifdef __cplusplus
}
#endif
