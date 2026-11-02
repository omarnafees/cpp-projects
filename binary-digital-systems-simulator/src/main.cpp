#include "binary/number_inspector.hpp"
#include <iostream>
using namespace std;
int main()
{
int enteredNum;

while (true)
{
    cout << "Enter a number: ";
    cin >> enteredNum;

    if (cin.fail())
    {
        cout << "Invalid input! Try again.\n";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    else
    {
        break;
    }
}
displayRange();

displayUnsigned(enteredNum);
displayDecimal(enteredNum);
displayBinary(enteredNum);
display8BitBinary(enteredNum);
displayOctal(enteredNum);
displayHexadecimal(enteredNum);
displaySize(enteredNum);

int a,b;
cout<<"Enter First Integer"<<endl;
cin>> a;
cout<<"Enter Second Integer"<<endl;
cin>>b;
displayBitwiseAND(a,b);
displayBitwiseOR(a, b);
displayBitwiseXOR(a, b);
displayBitwiseNot(a ,b);
return 0;
}