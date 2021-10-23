#include <iostream>
using namespace std;
int main()
{
    int num=0;
    cout<<"enter the number: ";
    cin>>num;
    if(num%2==0 && num%3==0 && num%5!=0)
    {
        cout<<"the number is divisble by 2 and 3 \n";
    }
    else if(num%2==0 && num%5==0 && num%3!=0)
    {
        cout<<"the number is divisble by 2 and 5 \n"; 
    }
    else if(num%3==0 && num%5==0 && num%2!=0)
    {
         cout<<"the number is divisble by 3 and 5 \n";
    }
        else if(num%2==0 && num%3==0 && num%5==0)
    {
         cout<<"the number is divisble by 2,3 and 5 \n";
    }
    else{
        cout<<"the number is not divisible by any \n";
    }
    system("pause");
    return 0;
}