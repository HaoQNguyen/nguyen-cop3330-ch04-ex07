#include <iostream>
#include <string.h>
using namespace std;

int convertString(string s)
{
    if (s == "one")
        return 1;
    else if (s == "two")
        return 2;
    else if (s == "three")
        return 3;
    else if (s == "four")
        return 4;
    else if (s == "five")
        return 5;
    else if (s == "six")
        return 6;
    else if (s == "seven")
        return 7;
    else if (s == "eight")
        return 8;
    else if (s == "nine")
        return 9;
    else
        return 0;
}

int getNumber(string s)
{
    if (isdigit(s[0]))
        return stoi(s);
    else
        return convertString(s);
}

string result(int n1, int n2, string operation)
{
    char* s;

    if (operation == "+")
        sprintf(s, "The sum of %d and %d is %d.", n1, n2, n1 + n2);
    else if (operation == "-")
        sprintf(s, "The difference of %d and %d is %d.", n1, n2, (n1 - n2));
    else if (operation == "*")
        sprintf(s, "The product of %d and %d is %d.", n1, n2, (n1*n2));
    else if (operation == "/")
        sprintf(s, "The quotient of %d and %d is %lf.", n1, n2, (double(n1)/n2));
    else
        sprintf(s, "Invalid operation.");

    return s;
}