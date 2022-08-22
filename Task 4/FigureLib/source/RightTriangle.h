#pragma once
#include "Triangle.h"

namespace shape {
	class RightTriangle : public Triangle
	{
	public:
		FIGURE_API RightTriangle(int a, int b, int c, int A, int B);
	};
}

