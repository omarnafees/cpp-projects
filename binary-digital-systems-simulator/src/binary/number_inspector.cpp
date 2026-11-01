#include "binary/number_inspector.hpp"
#include <iostream>
#include <bitset>

using namespace std;

void displayDecimal(int x)
{
    cout << "Decimal: " << dec << x << endl;
}
void displayBinary(int x)
{
cout<<"Binary: "<<bitset<32>(x) <<endl;
}
void displayOctal(int x)
{
cout<<"Octal: "<<oct<<x<<endl;
}
void displayHexadecimal(int x)
{
cout<<"Hexadecimal: "<<hex<<x<<endl;    
}
void displaySize(int x)
{
    cout << "Size: " << sizeof(x) << " bytes" << endl;
}
