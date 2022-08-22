#pragma once
#include "Figure.h"

namespace shape {
	class Quadrilateral : public Figure
	{
	public:
		FIGURE_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);

		FIGURE_API void GetSides() override;

		FIGURE_API void GetAngles() override;

	protected:
		int a;
		int b;
		int c;
		int d;
		int A;
		int B;
		int C;
		int D;
	};
}

