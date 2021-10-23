#include <iostream>
using namespace std;
int main()
{
    char letter;
    int length=0;
    int width=0;
    int radius=0;
    int height=0;
    int base=0;
    float area=0.0;
    float perimeter=0.0;
    float pi=3.142;

    cout<<"enter R/r if you want to find area and perimeter of rectangle,t/T for area and perimeter of triangle,c/C for area and perimeter of circle: ";
    cin>>letter;
    if(letter=='r' || letter=='R')
      {
        cout<<"enter the length of the rectangle: ";
        cin>>length;
        cout<<"enter the width of the rectangle: ";
        cin>>width;
        area=length*width;
        perimeter=length+length+width+width;
        cout<<"the area of the rectangle is "<<area<<"\n";
        cout<<"the perimeter of the rectangle is "<<perimeter<<"\n";
      }
      else if (letter=='t' || letter=='T')
      {
        cout<<"enter the height of the triangle: ";
        cin>>height;
        cout<<"enter the width of the triangle: ";
        cin>>width;
        cout<<"enter the base of the triangle: ";
        cin>>base;
        area=0.5*height*base;
        perimeter=height+base+width;
        cout<<"the area of the triangle is "<<area<<"\n";
        cout<<"the perimeter of the triangle is "<<perimeter<<"\n";
      }
       else if(letter=='c' || letter=='C')
      {
        cout<<"enter the radius of the circle: ";
        cin>>radius;
        area=pi*radius*radius;
        perimeter=2*pi*radius;
        cout<<"the area of the circle is "<<area<<"\n";
        cout<<"the perimeter of the circle is "<<perimeter<<"\n";
      }
      else{
          cout<<"the input is invalid";
      }
      system("pause");
      return 0;
}
