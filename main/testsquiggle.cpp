
#include <stdexcept>
#include <exception>
extern "C" {
}
#include "test.h"
extern "C" {
void app_main(void);
}
void app_main(void)
{
  int testvar2=AAABBBCCC;
  if (testvar2) {testvar2=0;}
}

