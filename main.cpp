#include <string>
#include <iostream>

#include "Dog.h"

using namespace std;

int frotz(int fff) {
    return 32;
}

int aaa(int x, int y) {
    return x+y;
}

int fff(int x, int y) {
    return 33;
}

int main() {
    std::string frotz2 = "alsdkfj";

    int x = frotz(44);
    int y = fff(44);
    std::cout << "Hello World" << std::endl;
    int z = fff(32);
    int q = fff(42);


    Dog *dog = new Dog();
    dog->speak();
    dog->sit(42, true);

    delete dog;
    dog = NULL;

}
