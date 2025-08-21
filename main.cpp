//govnocoder1337 PonosOS v1
#include <iostream>
#include "notepad.h"

int otvet;

int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "Добро пожаловать в PonosOS" <<std::endl;
    std::cout << "[1] Блокнот" <<std::endl;
    std::cout << "Ответ: ";
    std::cin >> otvet;

    if(otvet == 1) {
        vladis();
    }

    return 0;
}