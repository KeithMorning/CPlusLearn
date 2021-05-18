#include <iostream>
#include "SaleItem.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Screen screen = Screen();
    screen.move(10,10).set('#');

    Screen myScreen = Screen(5,5,'X');
    myScreen.move(4,0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    Sales_data data = Sales_data();
    const std::string a = "1234";
    data.combine(&a);

    return 0;
}
