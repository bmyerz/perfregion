#include "perfregion.h"
#include <unistd.h>
#include <iostream>
#include <cstdlib>

int main() {
  PerfRegion r;

  sleep(2);

  // start region here
  if (!r.start()) { std::cout << "ERROR" << std::endl; exit(1);}

  sleep(2);
  r.stop();
  std::cout << "should output ~2sec elapsed, not 4" << std::endl;
}
  
