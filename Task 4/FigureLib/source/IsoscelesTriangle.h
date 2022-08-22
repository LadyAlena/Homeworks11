#pragma once
#include "Triangle.h"

namespace shape {
	class IsoscelesTriangle : public Triangle
	{
	public:
		FIGURE_API IsoscelesTriangle(int LengthAandC, int b, int valueAnglesAandC, int B);
	};
}

