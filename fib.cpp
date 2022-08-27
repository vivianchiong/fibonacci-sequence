#include <iostream>
#include <vector>

void fib(std::vector<int>& vec, int num) {
    vec.push_back(0);
    if (1 == num) return;
    vec.push_back(1);
    if (2 == num) return;

    int count = 2;
    for (int i = 0; count < num; ++i) {
        int sum = vec[i] + vec[i+1];
        vec.push_back(sum);
        ++count;
    }
}

void print(std::vector<int>& vec) {
    for (auto const& n : vec) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}