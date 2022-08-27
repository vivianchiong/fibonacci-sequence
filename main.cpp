#include <iostream>
#include <vector>

#include "fib.cpp"

int main(int argc, char* const argv[]) {
    std::vector<int> vec;
    int num;
    bool done = false;

    do {
        std::cout << "Enter number of Fibonacci digits (min 1): ";
        std::cin >> num;

        if (num > 0) {
            fib(vec, num);
            print(vec);
            done = true;
        }

    } while (!done);
}