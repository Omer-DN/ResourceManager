#pragma once
#ifndef WATER_H
#define WATER_H

#include"Resource.h"

class Water : public Resource {
public:
    Water(double amount);
    void useResource(double amount) override;
    void displayResource() override;
};


#endif // !WATER_H
