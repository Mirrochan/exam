#include <iostream>
#include <string>

void splitIntoPairs(int number) {
    std::string numberString = std::to_string(number);

    for (int i = 0; i < numberString.length(); ++i) {
        for (int j = 1; i + j <= numberString.length(); ++j) {
            std::string pair = numberString.substr(i, j);
    
        }
    }
}

int main() {
    int number = 12345;
    splitIntoPairs(number);
    std::cout << pair << " ";
    return 0;
}