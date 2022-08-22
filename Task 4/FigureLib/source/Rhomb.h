#pragma once
#include "Parallelogram.h"

namespace shape {
	class Rhomb : public Parallelogram
	{
	public:
		FIGURE_API Rhomb(int LengthSides, int AnglesAandC, int AnglesBandD);
	};
}

