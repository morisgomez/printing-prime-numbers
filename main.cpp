/*
PIC 10A Homework 4, factor.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 10/28/2022
*/
#include <iostream>
using namespace std;

int main ()
{
    cout << "Input a positive integer greater than 1: ";
    int n; //represents the user input.
    cin >> n; //stores input into n.
    cout << "Prime factors: "; //prints out before running logic.
    for (int i = 2; i <= n; i++) //we initialize at 2 bc we want numbers greater than 1.
    {//opens for loop.
            while (n % i == 0) //checks if number i is a factor of number n first.
            {//opens while loop.
                cout << i << " "; //prints out i and adds space.
                n = n / i; //divides initial n by i.
            }//closes while loop.
    }//closes for loop and updates i.
    return 0;
}
