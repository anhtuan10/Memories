#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter value to x and y: ";
    cin >> x >> y;

    cout << endl;
    cout << x<< "+"<<y<< "=" <<x+y<< endl;
    cout << x<< "-" << y<< "="<<x-y<< endl;
    cout << x<< "*"<< y<< "="<< x*y<< endl;
    cout << x<< "/"<< y<< "="<< x/y<< endl;
    cout << x<< "%"<< y<< "="<<x%y<< endl;
    cout << "x/y =" << static_cast<float>(x) / static_cast<float>(y)<< endl;
    cout << "2 ^ 3="<< pow(2, 3)<< endl;
    cout << "10 ^2="<< pow(10, 2)<< endl;
    cout << "32.12 ^ 2^3 = "<< pow(32.12, 2.3)<< endl;
    cout << "square root of 81 ="<< sqrt(81)<< endl;

    const double PI = 3.14159265;
    double angle = 60.0;
    cout << "sine of 60 degree: "<<  cos(angle * PI/180) << endl;
    angle = 0.0;
    cout<< "sine of 0 degree: " << sin(angle * PI/180) << endl;

    float c = -5.7;
    cout << "absolute value of x = " << abs(c) << endl;

    return 0;
}