#include <iostream>

void modify(int& num);

int main() {
    int m = 10;
    std::cout << "num before: " << m << "\n";
    modify(m);
    std::cout << "num after: " << m << "\n";
} 

void modify(int& num) {
    num++;
}