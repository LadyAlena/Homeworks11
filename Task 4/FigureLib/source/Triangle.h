#pragma once
#include "Figure.h"

namespace shape {
	class Triangle : public Figure
	{
	public:
		FIGURE_API Triangle(int a, int b, int c, int A, int B, int C);

		FIGURE_API void GetSides() override;
		FIGURE_API void GetAngles() override;

	protected:
		int a;
		int b;
		int c;
		int A;
		int B;
		int C;
	};
}

