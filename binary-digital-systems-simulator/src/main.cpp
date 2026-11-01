#include "binary/number_inspector.hpp"
#include <iostream>
using namespace std;
int main()
{
int enteredNum;
cout<<"Enter A Number: ";
cin>>enteredNum;
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

displayDecimal(enteredNum);
displayBinary(enteredNum);
displayOctal(enteredNum);
displayHexadecimal(enteredNum);
displaySize(enteredNum);
return 0;
}