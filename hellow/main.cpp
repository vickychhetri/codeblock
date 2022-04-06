#include <iostream>
#include<CalculatorManager.h>
using namespace std;

int main()
{
    float x,y;
    cout<<"========================"<<endl;
    cout<<"Sum Calculator Software"<<endl;
    cout<<"========================"<<endl;
    cout<<endl<<endl;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Second Number: ";
    cin>>y;

   try{
   CalculatorManager manager(x,y);
   float result=manager.getResult();

    FileManager manager(x,y);
   if(result<0){
    throw result;
   }

    cout<<"========================"<<endl;
    cout << "Sum of Two Number is (value > 0): " << result<<endl;
    cout<<"========================"<<endl;

   FileManager managerF(x,y);

  }
   catch(float result){

    cout << "Sorry ! , You Specify Negative Number !" << result<<endl;

   }
    return 0;
}
