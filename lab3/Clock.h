nclude <vector>

#include <algorithm>

#include <iostream>

#include <cstdlib>

#include "Clock.h"

#include <ctime>

using namespace std;

 class Clock {

 public:

  Clock();

  Clock(clock_t s);

 void start();

 void setStart(clock_t start_ts);

 clock_t getStart();

 double getElapsedTime();

 private:

 clock_t start_ts;

 };
