#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float weight=0.0;
float height=0.0;
float bmi=0.0;
cout<<"enter your weight in pounds: ";
cin>>weight;
cout<<"enter your height in inches: ";
cin>>height;
bmi=(weight*703)/(height*height);
if (bmi>=18.5 && bmi<=25)
{
    cout<<"your bmi is "<<bmi<<" and your weight is optimal \n";
}
else if(bmi<18 && bmi>=0)
{
    cout<<"your bmi is "<<bmi<<" and you are underweight \n";
}
else if (bmi>25)
{
    cout<<"your bmi is "<<bmi<<" and you are overweight \n";
}
else
{
    cout<<"enter positive values and try again";
}
system("pause");
return 0;
}