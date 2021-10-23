#include <iostream>
using namespace std;
int main(){
 int num=0;
 int even=2;
 int odd_num=0;
 int odd=5;
 int count=1;
 cout<<"enter the number: ";
 cin>>num;
 if (num<1)
 {
    cout<<"";
 }
 else
 {
  odd_num=(num/2);
  while(count<=num &&  count<=(odd_num))
  {
    cout<<even<<" - "<<odd<<" + ";
    even=even+2;
    odd=odd+5;
    count++;
    
    
  }
  if(num%2!=0)
    {
        cout<<even;
    }

  
 }
 system("pause");
 return 0;

}