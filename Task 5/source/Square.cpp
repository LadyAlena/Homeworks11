#include "Square.h"

namespace shape {
	Square::Square(int LengthSides) : Rectangle(LengthSides, LengthSides) {
		name = "Квадрат";
	}
}