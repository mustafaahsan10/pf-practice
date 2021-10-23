#include <iostream>
#include <string>
using namespace std;
int main(){
int days=0;
int year=0;
string month;
cout<<"enter the month: ";
cin>>month;
cout<<"enter the year: ";
cin>>year;

if (month=="january" || month=="march" || month=="may" || month=="july" || month=="august" || month=="october" || month=="december")
{
    days=31;
    cout<<"the number of days "<<days<<"\n";
}
else if(month=="april" || month=="june" || month=="september" || month=="november" )
{
    days=30;
    cout<<"the number of days "<<days<<"\n";

}
else if(year%4==0)
 {
     cout<<"its a leap year \n";
     days=29;
     cout<<"the number of days "<<days<<"\n";
 }
 else
 {
     cout<<"its not a leap year \n";
     days=28;
     cout<<"the number of days "<<days<<"\n";
 }
 
 system("pause");
 return 0;

}