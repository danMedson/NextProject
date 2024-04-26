#include <iostream>
#include <string>

int main() {
    
    int* dynamicInt = new int;
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;
    std::string* dynamicStr = new std::string;
    std::cout << "Enter a string value: ";
    std::cin.ignore(); // Clear newline character from previous input
    std::getline(std::cin, *dynamicStr);
    std::cout << "Dynamically allocated integer: " << *dynamicInt << std::endl;
    std::cout << "Dynamically allocated string: " << *dynamicStr << std::endl;

   
    delete dynamicInt;
    delete dynamicStr;

    return 0;
}
