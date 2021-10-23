#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int num,digit,original_num,check_num=0;
 int sum,checker,count=0;
 sum=0;
 checker=0;
 num=0;
 digit=0;
 original_num=0;

 cout<<"enter the number: ";
 cin>>num;
 original_num=num;
 check_num=num;
 while(check_num>0)
 {
     check_num=check_num/10;
     count++;
 }
 while(num>0)
  {
   digit=num%10;
   sum=sum+(pow(digit,count));
   num/=10;
   }
 
 if(sum==original_num)
 {
     cout<<"it is an armstrong number"<<endl;

 }
 else if(num<0)
 {
     cout<<"please enter a positive number"<<endl;
 }
 else if(sum!=original_num)
 {
     cout<<"it is not an armstrong number"<<endl;
 }
 system("pause");
 return 0;


}