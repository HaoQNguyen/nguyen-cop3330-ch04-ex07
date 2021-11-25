#include "function.h"

int main()
{
    int n1, n2;
    string s, operation;

    cout << "Input a 1-digit number written as either digits or spelled out: ";
    cin >> s;

    n1 = getNumber(s);

    cout << "Input another 1-digit number written as either digits or spelled out: ";
    cin >> s;

    n2 = getNumber(s);

    cout << "Operation: ";
    cin >> operation;

    cout << result(n1, n2, operation);

    return 0;
}