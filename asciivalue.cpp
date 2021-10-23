#include <iostream>
using namespace std;
int main(){
char letter;
int value=0;
cout<<"enter the letter: ";
cin>>letter;
value=int(letter);
if(value>=65 && value<=90)
{
    cout<<letter<<" is a capital letter and its ascii is "<<value<<endl;
}
else if(value>=97 && value<=122)
{
    cout<<letter<<" is a small letter and its ascii is "<<value<<endl;

}
else if(value>=48 && value<=57)
{
     cout<<letter<<" is a digit and its ascii is "<<value<<endl;

}
else
{
    cout<<"it is a special character"<<endl;
}
system("pause");
return 0;

}
