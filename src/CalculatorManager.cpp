#include "CalculatorManager.h"

CalculatorManager::CalculatorManager()
{
    this->x=0;
    this->y=0;
}

CalculatorManager::CalculatorManager(float x, float y)
{
    this->x=x;
    this->y=y;
}

CalculatorManager::CalculatorManager(float x)
{
    this->x=x;
    this->y=0;
}
CalculatorManager::~CalculatorManager()
{
    //dtor
}
