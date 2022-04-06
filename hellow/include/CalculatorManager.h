#ifndef CALCULATORMANAGER_H
#define CALCULATORMANAGER_H


class CalculatorManager
{
    private:
         float x,y;

    public:
        CalculatorManager();
         CalculatorManager(float x, float y);
          CalculatorManager(float x);
        virtual ~CalculatorManager();
    float getResult(){
    return this->x+this->y;
    }
    protected:


};

#endif // CALCULATORMANAGER_H
