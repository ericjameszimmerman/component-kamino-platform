#ifndef platform_H
#define platform_H

#define __STDC_LIMIT_MACROS
#include <stdbool.h>
#include <stdint.h>

#include "platformPort.h"

namespace platform {
    
  void initialize();
  void tearDown();
  int msleep(unsigned int milliseconds);
  unsigned int sleep(unsigned int seconds);

}

#endif