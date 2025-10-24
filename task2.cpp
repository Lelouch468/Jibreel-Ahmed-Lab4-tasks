#include <iostream>
#include <string>
using namespace std;
int main(){
    string month, month2, month3;
    string rainfall;
    cout<<"Enter month 1:";
    getline(cin, month);
    cout<<"Enter month 2:";
    getline(cin, month2);
    cout<<"Enter month 3:";
    getline(cin, month3);
    cout<<"Enter amount of rain";
    getline(cin, rainfall);
    cout<<"The average rainfall for"<<" "<< month<<", " << month2 <<", and "<< month3 <<", is "<< rainfall<< "inches";
    return 0;
}
