#include <iostream>
using namespace std;
int main(){
    float num1=0.0;
    float num2=0.0;
    float answer=0.0;
    char operand;
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    cout<<"enter the operator: ";
    cin>>operand;
    if (operand=='+')
    {
        answer=num1+num2;
        cout<<"the answer is: "<<num1<<" + "<<num2<<" = "<<answer;
    
    }
    else if (operand=='-')
    {
        answer=num1-num2;
        cout<<"the answer is: "<<num1<<" - "<<num2<<" = "<<answer;
    
    }
    else  if (operand=='*')
    {
        answer=num1*num2;
        cout<<"the answer is: "<<num1<<" * "<<num2<<" = "<<answer;
    
    }
    else  if (operand=='/')
    {
        if (num2==0)
        {
            cout<<"division can not be performed";
        }
        else{
        answer=num1/num2;
        cout<<"the answer is: "<<num1<<" / "<<num2<<" = "<<answer;
        }
    }
    system("pause");
    return 0;
}
