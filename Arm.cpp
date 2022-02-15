//
// Created by Keith Lancaster on 2/15/22.
//

#include "Arm.h"

int Arm::getLength() const {
    return length;
}

void Arm::setLength(int length) {
    Arm::length = length;
}

Arm::~Arm() {
    std::cout << "In the Arm destructor" << std::endl;
}
