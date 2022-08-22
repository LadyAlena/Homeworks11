#include <iostream>
#include <string>
#include "Leave.h"

int main()
{
#ifdef _WIN32
    system("chcp 1251");
#endif

    Leave::Leaver use;
    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << use.leave(name) << std::endl;


    return 0;
}