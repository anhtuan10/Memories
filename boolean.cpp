#include<iostream>
using namespace std;
int main()
{
    bool b(true);
    cout << b << endl;
    cout<< !b<< endl;
    
    bool b2(false);
    cout<< b2<< endl;
    cout<< !b2<< endl;

    cout << boolalpha << endl;
    cout<< b2<< endl;
    cout<< !b2<< endl;

    bool c1 = 1< 2;
    bool c2 = 5+6 > 10;
    bool c3 = (1+1 !=2 );

    int x =2, y =4;
    bool c4 = (x*3 !=y);

    cout << c1 << " " << c2<< " "<< c3<< " "<< c4 << endl;

    double d1(100- 99.99);
    double d2(10- 9.99);

    bool e1 = (d1>d2);
    bool e2 = (d1==d2);
    
    cout << e1 << endl;
    cout << e2 << endl;

    return 0;
}