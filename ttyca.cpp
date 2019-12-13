#include<iostream>
using namespace std;
int main()
{
    float local_variable1 = 1.0;
    {
        float local_variable2 = 2.0;
        local_variable1 = 11.0;

        cout << "local_variable2: " << local_variable2 << endl;
    }
    cout << "local_variable1: " << local_variable1 << endl;

    int number_of_employees = 30;
    {
        int number_of_employees = 10;
        cout << "Number of employees of the inner block: " << number_of_employees << endl;
    }
        cout << "Number of employees of the outer block: " << number_of_employees << endl;

    return 0;
}