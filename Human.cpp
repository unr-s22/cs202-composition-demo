//
// Created by Keith Lancaster on 2/15/22.
//

#include <iostream>
#include "Human.h"

Human::Human(const std::string &name, int armLength) {
    std::cout << "In the Human constructor" << std::endl;
    arm.setLength(armLength);
}

Human::~Human() {
    std::cout << "In the Human destructor" << std::endl;
}

