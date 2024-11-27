#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a, b;

    cin >> a;
    cin >> b;

    Fraction product = a * b;
    Fraction quotient = a / b;
    Fraction sum = a + b;
    Fraction difference = a - b;

    cout << sum << endl;
    cout << difference << endl;
    cout << product << endl;
    cout << quotient << endl;
    
    cout << (a>b) << endl;
    cout << (a<b) << endl;

    return 0;
}    


