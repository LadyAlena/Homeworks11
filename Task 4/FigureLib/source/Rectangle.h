#pragma once
#include "Parallelogram.h"

namespace shape {
	class Rectangle : public Parallelogram
	{
	public:
		FIGURE_API Rectangle(int LengthAandC, int LengthBandD);
	};
}

