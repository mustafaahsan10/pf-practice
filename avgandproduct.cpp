#include <iostream>
using namespace std;
int main(){
char letter;
int sum,num,count,product=1;
float average=0;
sum=0;
num=1;
count=0;




while(letter!='q')
{
   cout<<"if you want to quit enter q or press any key if you want to continue the program"<<endl;
   cin>>letter;
   if(letter=='q')
   {
       break;
   }
   else{
   cout<<"enter a number: "<<endl;
   cin>>num;
   sum+=num;
   product*=num;
   count++;
   }
 average=sum/count;
}
cout<<"the average is "<<average<<endl;
cout<<"the product is "<<product<<endl;
system("pause");
return 0;


}