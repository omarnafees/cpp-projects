#include "binary/binary_arithmetic.hpp"
#include <string>
#include <iostream>
using namespace std;

bool isValidBinary(string x)
{
    if (x.length() != 4)
        return false;

    for (size_t i = 0; i < x.length(); i++)
    {
        if (x[i] != '0' && x[i] != '1')
            return false;
    }

    return true;
}

string binaryaddition (string x,string y)
{
    if (!isValidBinary(x) || !isValidBinary(y))
{
    return "Invalid input";
}
int carry = 0;
string result = "";
int sum;

for (int i= x.length()-1 ;i>=0;i--)
{
int bit1 = x[i] - '0';
int bit2 = y[i] - '0';
sum= bit1 +bit2+carry;
int resultBit = sum % 2;
carry = sum / 2;
result = to_string(resultBit) + result;
} 
if (carry == 1)
{
    result = "1" + result;
}
return result;
}




string binarysubtraction(string x, string y)
{
    if (!isValidBinary(x) || !isValidBinary(y))
{
    return "Invalid input";
}



    int borrow = 0;
    string result = "";
    int difference;
if (stoi(x, nullptr, 2) < stoi(y, nullptr, 2))
{
    return "Cannot subtract: first number must be greater than or equal to second number.";
}
    for (int i = x.length() - 1; i >= 0; i--)
    {
        int bit1 = x[i] - '0';
        int bit2 = y[i] - '0';

        difference = bit1 - bit2 - borrow;

        if (difference < 0)
        {
            difference += 2;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        result = to_string(difference) + result;
    }

    return result;
}