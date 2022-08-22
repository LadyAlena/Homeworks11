#pragma once
#include "Quadrilateral.h"

namespace shape {
	class Parallelogram : public Quadrilateral
	{
	public:
		Parallelogram(int LengthAandC, int LengthBandD, int AnglesAandC, int AnglesBandD);
	};
}

