/*
               Add C++ program to find sum of first 50 natural numbers
                                       Akmal Sattar
                                      L1F23BSCS0202
                                      Assignment 01
*/
#include <iostream>
using namespace std;

int main() 
{
    int sum = 0;
    
    for (int i = 1; i <= 50; i++) 
    {
        sum += i;
    }

    cout << "Sum of the first 50 natural numbers = " << sum << endl;

    return 0;
}
