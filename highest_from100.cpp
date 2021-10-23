#include <iostream>
using namespace std;
int main(){
    int num=0;
   int greatest=0;
   int greater=0;
   int count=1;
   while(count<=10)
   {
       cout<<"enter a number: ";
       cin>>num;
       count++;
      if(num>greatest)
        {
            greater=greatest;
            greatest=num;
            
        }
        else if(num>greater )
         {
             greater=num;
         }

      
   }
   cout<<greatest<<endl;
   cout<<greater<<endl;

    
    system("pause");
    return 0;
}