#include <iostream>
using namespace std;
int main(){

float Lenght1;
float Width1;
float Lenght2;
float Width2;
cout<<"Enter Lenght of Rectacngle 1:\t";
cin>>Lenght1;
cout<<"Enter width of Rectangle 1:\t";
cin>>Width1;
double area1=Width1*Lenght1;
cout<<"Enter Lenght of Rectacngle 2:\t";
cin>>Lenght2;
cout<<"Enter width of Rectangle 2:\t";
cin>>Width2;
double area2=Width2*Lenght2;
cout<<"Area of Rectangle 1 is:\t"<<area1<<endl;
cout<<"Area of Rectangle 2 is:\t"<<area2<<endl;
if (area1==area2)
{
    cout<<"Both Rectangles have equal areas";
}
else {cout<<"Both Rectangles do not have equal areas";}
return 0;

}