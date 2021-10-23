#include <iostream>
using namespace std;
/*Write a pseudo-code that prints the first n terms of the Tick-Tock series. The value of n is
taken as input. The first 8 terms of the Tick-Tock series, i.e., for n=8 are as follows:
2 - 5 + 4 -10 + 6 - 15 + 8 - 20

Can you guess the pattern? The odd terms are multiples of 2 and in increasing order (2, 4, 6, 8 etc.). The even
terms are increasing multiples of 5 and in negative form. The terms are alternatively positive and negative.
Nothing should be printed if the value of n is below 1.*/
int main() 
{
    int num1,num2,num3 ,num4;
    cout << "Enter the number till where you want series to go\n";
    cin >> num1;
    num1 = num1 + 1;
    num2 = 1;
    num3 = 2;
    num4 = 5;
    while (num1>num2)
    {
        if (num1%2==1)
        {
            cout << num3;
            num3=num3+2 ;
        }
        else if (num1%2==0)
        {
            cout <<"-"<< num4<<"+";
            num4 = num4 + 5;
        }
        num1--;
    }
    system("pause");
    return 0;

}