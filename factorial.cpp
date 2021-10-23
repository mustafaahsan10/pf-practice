#include <iostream>
using namespace std;
int main(){
    int num=1;
    int factorial=1;
    cout<<"enter the number ";
    cin>>num;
    while(num>0)
    {
        factorial=factorial*num;
        num--;
    }
    cout<<factorial<<endl;
    return 0;}