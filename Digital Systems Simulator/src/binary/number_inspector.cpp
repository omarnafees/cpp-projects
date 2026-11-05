#include "binary/number_inspector.hpp"
#include <limits>
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

void displayRange()
{
    cout << "Minimum: " << numeric_limits<int>::min() << endl;
    cout << "Maximum: " << numeric_limits<int>::max() << endl;
}
void displayUnsigned(int x)
{
    cout << "Unsigned: " << static_cast<unsigned int>(x) << endl;
}
void display8BitBinary(int x)
{
    cout << "8-bit Binary: " << bitset<8>(x) << endl;
}
void displayBitwiseAND(int a, int b)
{
    cout << "Bitwise AND: " << (a & b) << endl;
}
void displayBitwiseOR(int a, int b)
{
    cout<<"Bitwise OR: " << (a|b) <<endl;
}
void displayBitwiseXOR(int a, int b)
{
    cout<<"Bitwise XOR: "<<(a^b)<<endl;
}
void displayBitwiseNot(int a ,int b)
{
    cout << "Bitwise NOT Of "<<a<<": " <<dec<< (~a) << endl;
    cout << "Bitwise NOT Of "<<b<<": "<<dec<< (~b) << endl;
}