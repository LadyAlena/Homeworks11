#include "EquilateraltTriangle.h"

namespace shape {
	EquilateraltTriangle::EquilateraltTriangle(int LengthSide) : Triangle(LengthSide, LengthSide, LengthSide, 60, 60, 60) {
		name = "Равносторонний треугольник";
	}
}
