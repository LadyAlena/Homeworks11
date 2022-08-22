#pragma once
#include <string>

#ifdef LEAVELIB_EXPORTS
#define LEAVE_API __declspec(dllexport)
#else 
#define LEAVE_API __declspec(dllexport)
#endif

namespace Leave {
	class Leaver {
	public:
		LEAVE_API std::string leave(std::string msg);
	};
}