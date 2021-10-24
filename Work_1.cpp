#include <iostream>
#include <string>

int main() {
    int arr[10];
    for (int* p = arr; p < arr + 10; ++p) {
        *p = (p - arr) + 1; //заполнили числами от 1 до 10
    }
    std::cout << "Array:\n";
    for (int* p = arr; p < arr + 10; ++p) {
        std::cout << "[" << * p << "] ";
    }
    std::cout << std::endl;
    std::string str = "String";
    std::cout << "String:\n";
    for (char *c = &str[0]; c < &str[0] + str.length(); ++c) {
        std::cout << *c << " ";
    }
}