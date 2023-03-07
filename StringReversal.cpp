#include <iostream>

std::string promptForInput() {
    std::string input;

    std::cout << "Please enter a string you would like reversed" << std::endl;
    std::getline(std::cin, input);

    return input;
}

std::string reverseString(std::string input) {
    std::string reversedString;

    for(int i = input.length() - 1; i >= 0; i--) {
        reversedString = reversedString + input[i];
    }

    std::cout << reversedString << std::endl;

    return reversedString; 
}

int main() {
    std::string input = promptForInput();
    reverseString(input);

    return 0;
}