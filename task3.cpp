#include <iostream>
using namespace std;
int main(){
float radius;
float height;
double volume;
double area;
double pie=3.14159;
cout<<"Enter Radius:\t";
cin>>radius;
cout<<"Enter height:\t";
cin>>height;
area= 2*pie+2*(pie*pie);
volume= pie*(radius*radius)*height;
cout<< "Area is:\t" << area <<endl;
cout<<"Volume is:\t"<<volume <<endl;
return 0;

}