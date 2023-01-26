/*
1. Read in n1, n2, k, and gcd into integers
2. Receive user input for n1
3. Receive user input for n2
4. k is equal to 1
5. While k is less than or equal to n1 and less than or equal n2
    if n1 modulo k is 0 and n2 modulo k is 0
        gcd is equal to k
    k increases by 1
6. Display "GCD: " gcd
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n1, n2, k, gcd;

    // Receive user input
    cout << "Enter the first number: ";
    cin >> n1;

    // Receive user input
    cout << "Enter the second number: ";
    cin >> n2;

    k=1;

    // Loops while k is less than or equal to n1 and n2
    while (k <= n1 && k <= n2)
    {
        // If n1 can be divided by k without a remainder
        // If n2 can be divided by k without a remainder
        if (n1 % k == 0 && n2 % k == 0)
            gcd = k;    // k is equal to the greatest common divisor

        // Increases k by 1 each time, but never is greater than n1 or n2
        k++;
    }

     // Print greatest common divisor
     cout << "GCD: " << gcd;

     return 0;
}

