#include "Linear.h"

// calculate x such that mx+c=0
// return true if suceeded, false if failed
bool Linear::SolveLinear(double m, double c, double& outX)
{
  if (m==0)
  {
    bool success = (c==0);
    if (success)
    {
      constexpr double defaultValue = 0;
      outX = defaultValue;
    }
    return success;
  }

  outX = -c/m;
  return true;
}
