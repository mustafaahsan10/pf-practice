#include <iostream>
using namespace std;
int main(){
 int num=0;
 int factor=1;
 int count=1;
 cout<<"enter the number: ";
 cin>>num;
 while(count<=num)
 {
     if(num%factor==0)
     {
         cout<<factor<<" "<<endl;
     }
     factor++;
     count++;

 }
system("pause");
return 0;
}