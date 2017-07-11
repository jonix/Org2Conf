#include <iostream>

#include "Dog.h"

using namespace std;

int frotz(int fff) {
    return 32;
}

int fff(int x) {
    return 33;
}

int main() {
    int x = frotz(44);
    int y = fff(44);
    std::cout << "Hello World" << std::endl;
    int z = fff(32);
    int q = fff(42);


    Dog *dog = new Dog();
    dog->speak();
}
