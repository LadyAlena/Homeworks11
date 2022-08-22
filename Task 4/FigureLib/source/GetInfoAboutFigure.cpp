#include <iostream>
#include "GetInfoAboutFigure.h"

namespace shape {
	void GetInfoAboutFigure(Figure* figure)
	{
		std::cout << figure->GetName() << ": " << std::endl;
		figure->GetSides();
		figure->GetAngles();
		std::cout << std::endl;
	}
}
