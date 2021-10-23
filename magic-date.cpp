#include <iostream>

using namespace std;

int main()
{
    int month,day,year=0;
   /* int day=0;
    int year=0;*/
    cout<<"enter the day between 1 and 30: ";
    cin>>day;
    cout<<"enter the month in numeric form: ";
    cin>>month;
    cout<<"enter the year last two digit: ";
    cin>>year;
    if(day*month==year)
    {
        cout<<"date is magic \n";
    }
    else
    {
        cout<<"the date is not magic \n";
    }
    system("pause");
    return 0;
}