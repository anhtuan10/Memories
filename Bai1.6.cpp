#include<iostream>
using namespace std;
int main(){
    int myVar = 1;
    cout << "Default value: " << myVar << endl;

    cout<< "Change value of myVar (1): ";
    cin>> myVar;
    cout << " New value: " << myVar << endl;

    return 0;
}