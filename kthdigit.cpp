#include <iostream>
using namespace std;

int main()
{
    int x,y,k,count=0,num1=0,num2=0;
    cout<<"Enter nums;";
    cin>>x>>y>>k;
    if(k==0)
    {
        num1=x%10;
        num2=y%10;
        if(num1==num2)
        cout<<"kth digit is same";
        else
        cout<<"kth digit is not same";
        
    }
    else if(k>0)
    {
        while(count<=k)
        {
            num1=x%10;
            num2=y%10;
            x=x/10;
            y=y/10;
            count++;  
        }
         if (num1==num2)
         {
              cout<<"kth digit is same";
              }
        else{
             cout<<"kth digit is not same";

         }
    }
    system("pause");
	return 0;
}
