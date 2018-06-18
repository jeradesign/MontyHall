#include <iostream>
#include <random>

using namespace std;

std::mt19937 mt(1729);
std::uniform_int_distribution<int> dist(1,3);
// return a random door 1, 2 or 3
int random_door() {
    return dist(mt);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
