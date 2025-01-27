#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout << "Enter the password: ";
    std::cin >> password;

    if (password == "open_sesame") {
        std::cout << "Access granted!" << std::endl;
    } else {
        std::cout << "Access denied!" << std::endl;
    }

    return 0;
}
