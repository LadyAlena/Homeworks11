#include "Rhomb.h"

namespace shape{
	Rhomb::Rhomb(int LengthSides, int AnglesAandC, int AnglesBandD) : Parallelogram(LengthSides, LengthSides, AnglesAandC, AnglesBandD) {
		name = "Ромб";
	}
}