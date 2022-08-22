#pragma once
#include "Triangle.h"

namespace shape {
	class EquilateraltTriangle : public Triangle
	{
	public:
		FIGURE_API EquilateraltTriangle(int LengthSide);
	};
}