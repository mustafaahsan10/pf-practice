#include <iostream>
using namespace std;
int main(){
    int total_classes=0;
    int attended_classes=0;
    float attendance=0.0;
    cout<<"enter the number of classes held: ";
    cin>>total_classes;
    cout<<"enter the number of classes attended: ";
    cin>>attended_classes;
    attendance=(attended_classes/total_classes)*100;
    if (attendance=>75)
    {
        cout<<"student can give exams \n";

    }
    else{
        cout<<"student can not give the exams \n";
    }
    system("pause");
    return 0;
}