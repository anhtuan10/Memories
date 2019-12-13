#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = --x;
    cout << "value of x is ="<< x<<endl;
    cout << "Value of y is ="<<y<< endl;

    int a =3;
    int b = a--;
    cout << "value of x is ="<< a<<endl;
    cout << "Value of y is ="<<b<< endl;

    return 0;
}