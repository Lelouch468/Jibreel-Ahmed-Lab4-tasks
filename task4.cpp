#include <iostream>
using namespace std;
int main(){

int Yearofbirth;
int currentyear;
cout<< "Enter year of birth:\t";
cin>> Yearofbirth;
cout<<"Enter current year:\t";
cin>>currentyear;
int yeardifference=currentyear-Yearofbirth;
if (yeardifference>18 && yeardifference<28)
{
    cout<<"Eligible";
}
else {cout<<"Not Eligible";}
return 0;

}