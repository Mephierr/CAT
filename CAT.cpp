#include <iostream>
#include <chrono>
#include <thread>

void clearScreen() {
    // Для Windows
    #ifdef _WIN32
        system("cls");
    #else
        // Для Unix/Linux/Mac
        system("clear");
    #endif
}

void printCatFrame1() {
    std::cout << R"(
       /_/  
      ( o.o ) 
       > ^ <  
    )";
}

void printCatFrame2() {
    std::cout << R"(
       /_/  
      ( -.- ) 
       > ^ <  
    )";
}

void printCatFrame3() {
    std::cout << R"(
       /_/  
      ( >.< ) 
       > ^ <  
    )";
}

int main() {
    const int frames = 3;
    const int delay = 500; // задержка в миллисекундах

    while (true) {
        clearScreen();
        printCatFrame1();
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));

        clearScreen();
        printCatFrame2();
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));

        clearScreen();
        printCatFrame3();
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }

    return 0;
}
