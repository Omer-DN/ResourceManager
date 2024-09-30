#pragma once
#ifndef WATER_H
#define WATER_H

#include"Resource.h"
#include <mutex>

class Water : public Resource {
public:
    Water(double amount);

    void useResource(double amount) override;
    void displayResource() override;
    void replenishResource(double amount);


private:
    mutex mtx;
};


#endif // !WATER_H
