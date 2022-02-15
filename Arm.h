//
// Created by Keith Lancaster on 2/15/22.
//

#ifndef DEMO_ARM_H
#define DEMO_ARM_H


#include <iostream>

class Arm {
    int length {0};
public:
    int getLength() const;
    void setLength(int length);
public:
    Arm() {
        std::cout << "In the Arm constructor" << std::endl;
    };

    virtual ~Arm();
};


#endif //DEMO_ARM_H
