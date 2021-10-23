#include <iostream>
using namespace std;
int main(){
    int num1=0;
    int num2=0;
    cout<<"enter the 1st  number: ";
    cin>>num1;
    cout<<"enter the 2nd  number: ";
    cin>>num2;
    if (num1%num2==0)
    {
        cout<<"multiples";
    }
    else{
        cout<<"not multiples";
    }
    system("pause");
    return 0;

}