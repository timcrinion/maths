#include "Linear.h"

// calculate x such that mx+c=0
// return true if suceeded, false if failed
bool Linear::SolveLinear(double m, double c, double& outX)
{
  if (m==0)
  {
    return (c==0);
  }

  outX = -c/m;
  return true;
}
