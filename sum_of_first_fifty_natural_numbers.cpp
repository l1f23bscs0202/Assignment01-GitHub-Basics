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
  //Metohd 1
    int sum = 0;
    
    for (int i = 1; i <= 50; i++) 
    {
        sum += i;
    }
cout << "Sum of the first 50 natural numbers = " << sum << endl;
  
  //Method 2
    int n = 50;
    int formulaSum = n * (n + 1) / 2;

    cout << "Sum using formula = " << formulaSum << endl;
    return 0;
}
