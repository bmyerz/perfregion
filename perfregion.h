#pragma once

#include <string>
#include <sstream>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <string>


class PerfRegion {
  private:
    FILE* pipe;

  public:  
  int start() {
    std::ostringstream os;
    os << "perf stat -p " << getpid() << " perfregion.py";
    this->pipe = popen(os.str().c_str(), "w");
    if (!this->pipe) return 0;
    return 1;
  }
  
  void stop() {
    fputc('\n', pipe);
    pclose(pipe);
  }
};
    
