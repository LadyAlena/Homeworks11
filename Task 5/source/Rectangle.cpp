#include "Rectangle.h"

namespace shape {
	Rectangle::Rectangle(int LengthAandC, int LengthBandD) : Parallelogram(LengthAandC, LengthBandD, 90, 90) {
		name = "Прямоугольник";
	}
}