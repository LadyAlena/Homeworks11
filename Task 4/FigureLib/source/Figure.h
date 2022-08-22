#pragma once
#include <string>

#ifdef FIGURELIB_EXPORTS
#define FIGURE_API __declspec(dllexport)
#else
#define FIGURE_API __declspec(dllimport)
#endif

namespace shape {
	class Figure
	{
	public:
		FIGURE_API Figure();

		FIGURE_API int GetCountSides();
		FIGURE_API std::string GetName();
		FIGURE_API virtual void GetSides();
		FIGURE_API virtual void GetAngles();

	protected:
		std::string name;
		int side;
	};
}

