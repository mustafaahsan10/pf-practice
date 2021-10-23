#include <iostream>
using namespace std;
int main()
{
int num=1;
int x=0;
int y=0;
int divisor=0;
int greatest=0;
int smallest=0;
cout<<"enter the first number: ";
cin>>x;
cout<<"enter the second number: ";
cin>>y;
if(x>y)
 {
    greatest=x;
    smallest=y;
 }
 else{
     greatest=y;
    smallest=x;

 }
 divisor=greatest+1;
 while(divisor>0)
{
    if(greatest%divisor==0 && smallest%divisor==0)
    {
       break;
    }
 divisor--;
    
}
cout<<divisor<<" is the gcd"<<endl;

system("pause");
return 0;
}