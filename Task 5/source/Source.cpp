#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateraltTriangle.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"
#include "GetInfoAboutFigure.h"

int main(int argc, char** argv) {

	setlocale(LC_ALL, "ru");

	shape::Triangle tABC(10, 20, 30, 50, 60, 70);
	GetInfoAboutFigure(&tABC);

	shape::RightTriangle rtABC(10, 20, 30, 50, 50);
	GetInfoAboutFigure(&rtABC);

	shape::IsoscelesTriangle itABC(10, 50, 80, 20);
	GetInfoAboutFigure(&itABC);

	shape::EquilateraltTriangle etABC(70);
	GetInfoAboutFigure(&etABC);

	shape::Quadrilateral ABCD(10, 20, 30, 40, 50, 60, 70, 80);
	GetInfoAboutFigure(&ABCD);

	shape::Parallelogram pABCD(20, 45, 50, 130);
	GetInfoAboutFigure(&pABCD);

	shape::Rectangle rABCD(56, 78);
	GetInfoAboutFigure(&rABCD);

	shape::Rhomb rhombABCD(50, 120, 60);
	GetInfoAboutFigure(&rhombABCD);

	shape::Square sABCD(67);
	GetInfoAboutFigure(&sABCD);

	return 0;
}