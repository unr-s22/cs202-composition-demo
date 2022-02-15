//
// Created by Keith Lancaster on 2/15/22.
//

#ifndef DEMO_HUMAN_H
#define DEMO_HUMAN_H


#include <string>
#include "Arm.h"

class Human {
    std::string name;
    Arm arm;
public:
    explicit Human(const std::string &name, int armLength);

    virtual ~Human();
};



#endif //DEMO_HUMAN_H
