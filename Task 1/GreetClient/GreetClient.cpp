#include <iostream>
#include <string>
#include "Greet.h"

int main()
{
#ifdef _WIN32
    system("chcp 1251");
#endif

    Greet::Greeter use;
    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << use.greet(name) << std::endl;


    return 0;
}