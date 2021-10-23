#include <iostream>
using namespace std;
int main()
{
    int money,notesfthous,notesthous,notesfhun=1;

    cout<<"enter the amount of money you want to withdraw: ";
    cin>>money;
    if(money%500 != 0 && money<500)
    {
        notesfhun,notesthous,notesfthous=0;
        cout<<"invalid transaction"<<endl;
    }
    else
     {
         if(money>=5000)
        { 
            notesfthous=money/5000;
        }
        else if(money>500 && money<5000)
        {
            notesfhun=money%1000;
            notesthous=money/1000;
        }
        else if(money==500)
        {
            notesfhun=1;
            notesfthous=0;
            notesthous=0;

        }


     }

    
    cout<<"the number of 5000 notes are "<<notesfthous<<endl;
    cout<<"the number of 1000 notes are "<<notesthous<<endl;
    cout<<"the number of 500 notes are "<<notesfhun<<endl;
 system("pause");
 return 0;
}