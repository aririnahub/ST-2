// Copyright 2022 UNN-CS
#include "tasks.h"

#include <cmath>
#include <cstdint>

double EarthAndRope() {
  const double pi = 3.14159265358979323846;
  double radEr = 6378.1 * 1000;
  double addedLenght = 1.0;
  Circle earth(radEr);
  return ((earth.getFerence() + addedLenght) / (2 * pi) - earth.getRadius());
}

double Pool() {
  double radPool = 3.0;
  double path_width = 1.0;
  double concrete_price = 1000.0;
  double fence_price = 2000.0;
  Circle pool(radPool);
  Circle poolAndPath(radPool + path_width);
  return (fence_price * poolAndPath.getFerence() +
          concrete_price * (poolAndPath.getArea() - pool.getArea()));
}
