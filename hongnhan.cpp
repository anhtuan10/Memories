#include <iostream>
using namespace std;
int main()
{
    int number_of_cows = 90;
    cout << "The number of legs: " << number_of_cows * 4 << endl;
    int new_number_of_cows = number_of_cows +10;
    cout << "The number of legs(after 1 year): " << new_number_of_cows * 4 << endl;
    return 0;
}