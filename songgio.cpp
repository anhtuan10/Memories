#include<iostream>
using namespace std;
int main(){
    int value, day, month, year;

    cout << "Enter the value which will be inside the above variable: ";
    cin >> value;

    cout << "Value: " << value << endl;
    cout << "Enter day, month, year: ";
    cin >> day >> month >> year;
    cout << day << "/" << month << "/" << year << endl;

    return 0;
}