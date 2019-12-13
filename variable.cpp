#include<iostream>
using namespace std;
float local_variable1 = 1.0;
int main(){
    
    {
    float local_variable2 = 2.0;

    local_variable1 = 19;
    cout << "Value of local_variable2: " << local_variable2 << endl;
    }
    cout << "Value of local_variable1: " << local_variable1 << endl;
    return 0;
    
}