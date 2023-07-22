#include "zmath.h"

#include <math.h>

namespace Utils
{

	double ZMath::deg2rad(double& degrees)
	{
		return degrees * 4.0 * atan(1.0) / 180.0;
	}

}