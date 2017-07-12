#include <iostream>

#include "Dog.h"

void Dog::speak() {
  std::cout << "Woof" << std::endl;
}

void Dog::sit(int seconds, bool impatient) {
    std::cout << "Thump" << std::endl;
}
