#include "Quadratic.h"
#include "Linear.h"

bool Quadratic::SolveQuadratic(double a, double b, double c, double& outX)
{
  if (a==0)
  {
    // want bx + c = 0
    return Linear::SolveLinear(b, c, outX);
  }

  
}
