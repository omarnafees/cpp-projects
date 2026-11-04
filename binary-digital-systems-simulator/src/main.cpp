#include "logic/logic_gates.hpp"
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
displayBitwiseNot(a,b);







while (true)
{

int choice;
cout<<"===Logic Gates==="<<endl;
cout<<"1. AND"<<endl;
cout<<"2. OR"<<endl;
cout<<"3. NOT"<<endl;
cout<<"4. XOR"<<endl;
cout<<"5. NAND"<<endl;
cout<<"6. NOR"<<endl;

int x,y;
while (true)
{
    cout << "Choose a gate (1-6) or 0 to exit: ";
    
    cin >> choice;

    if (cin.fail())
    {
        cout << "Invalid input! Enter a number."<<endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
    else if (choice < 0 || choice > 6)
    {
        cout << "Invalid choice! Choose between 0 and 6."<<endl;
    }
    else
    {
        break;
    }
}

if (choice==0)
break;
switch (choice)
{
    
    case 1:
{
    cout << "AND Gate selected" << endl;
    cout << "Boolean Expression: Y = A . B" << endl;
    cout << "Truth Table:" << endl;
    cout << "A   B   Y" << endl;
    cout << "----------"<<endl;
    cout << "0   0   0" << endl;
    cout << "0   1   0" <<endl;
    cout << "1   0   0" <<endl;
    cout << "1   1   1" <<  endl;
    while (true)
    {
    cout << "Enter two binary inputs (0 or 1): ";
    cin >>x>> y;
    if (cin.fail())
        {
        cout << "Invalid input! Enter numbers only." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        }
    else if ((x != 0 && x != 1) || (y != 0 && y != 1))
        {
        cout << "Invalid input! Enter only 0 or 1." << endl;
        }
    else
        {
        cout << "Result: " << ANDGate(x, y) << endl;
        break;
        }
    }

    break;
}

    case 2:
    {

        cout<<"OR Gate selected"<<endl;
        cout<<"Boolean Expression: Y= A + B"<<endl;
        cout<<"Truth Table:"<<endl;
        cout<<"A   B   Y"<<endl;
        cout<<"----------"<<endl;
        cout<<"0   0   0"<<endl;
        cout<<"0   1   1"<<endl;
        cout<<"1   0   1"<<endl;
        cout<<"1   1   1"<<endl;
        while (true)
    {
        cout << "Enter two binary inputs (0 or 1): ";
        cin >>x>> y;
        if (cin.fail())
        {
        cout << "Invalid input! Enter numbers only." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        }
        else if ((x != 0 && x != 1) || (y != 0 && y != 1))
        {
        cout << "Invalid input! Enter only 0 or 1." << endl;
        }
    
        else
        {
        cout << "Result: " << ORGate(x, y) << endl;
        break;
        }
    }
    
    break;

   }

    case 3:
    {

        cout<<"NOT Gate selected"<<endl;
        cout<<"Boolean Expression: Y= NOT A"<<endl;
        cout<<"Truth Table:"<<endl;
        cout<<"A   Y"<<endl;
        cout<<"-----"<<endl;
        cout<<"0   1"<<endl;
        cout<<"1   0"<<endl;
        while (true)
    {
        cout << "Enter one binary input (0 or 1): ";
        cin >>x;

        if (cin.fail())
        {
        cout << "Invalid input! Enter numbers only." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        }
        else if (x != 0 && x != 1)
        {
        cout << "Invalid input! Enter only 0 or 1." << endl;
        }
        else
        {
        cout << "Result: " << NOTGate(x) << endl;
        
        break;
        }
    }
     break;
     }
    case 4:
    {

        cout<<"XOR Gate selected"<<endl;
        cout<<"Boolean Expression: Y= A ^ B"<<endl;
        cout<<"Truth Table:"<<endl;
        cout<<"A   B   Y"<<endl;
        cout<<"----------"<<endl;
        cout<<"0   0   0"<<endl;
        cout<<"0   1   1"<<endl;
        cout<<"1   0   1"<<endl;
        cout<<"1   1   0"<<endl;
        while (true)
    {
        cout << "Enter two binary inputs (0 or 1): ";
        cin >>x>> y;
    if (cin.fail())
        {
        cout << "Invalid input! Enter numbers only." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        }
        else if ((x != 0 && x != 1) || (y != 0 && y != 1))
        {
        cout << "Invalid input! Enter only 0 or 1." << endl;
        }
        else
        {
        cout << "Result: " << XORGate(x, y) << endl;
        break;
        }
        }
        break;
        }



    case 5:
    {

        cout<<"NAND Gate selected"<<endl;
        cout<<"Boolean Expression: Y= !(A . B)"<<endl;
        cout<<"Truth Table:"<<endl;
        cout<<"A   B   Y"<<endl;
        cout<<"----------"<<endl;
        cout<<"0   0   1"<<endl;
        cout<<"0   1   1"<<endl;
        cout<<"1   0   1"<<endl;
        cout<<"1   1   0"<<endl;
        while (true)
    {
        cout << "Enter two binary inputs (0 or 1): ";
        cin >>x>> y;

        if (cin.fail())
        {
            cout << "Invalid input! Enter numbers only." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if ((x != 0 && x != 1) || (y != 0 && y != 1))
        {
            cout << "Invalid input! Enter only 0 or 1." << endl;
        }
        else
        {
            cout << "Result: " << NANDGate(x, y) << endl;
            break;
        }
        }
            break;
            }
    case 6:
    {

        cout<<"NOR Gate selected"<<endl;
        cout<<"Boolean Expression: Y= !(A + B)"<<endl;
        cout<<"Truth Table:"<<endl;
        cout<<"A   B   Y"<<endl;
        cout<<"----------"<<endl;
        cout<<"0   0   1"<<endl;
        cout<<"0   1   0"<<endl;
        cout<<"1   0   0"<<endl;
        cout<<"1   1   0"<<endl;
        while (true)
    {
     cout << "Enter two binary inputs (0 or 1): ";
    cin >>x>> y;

        if (cin.fail())
        {
         cout << "Invalid input! Enter numbers only." << endl;
         cin.clear();
        cin.ignore(10000, '\n');
        }
        else if ((x != 0 && x != 1) || (y != 0 && y != 1))
        {
        cout << "Invalid input! Enter only 0 or 1." << endl;
    }
    else
        {
        cout << "Result: " << NORGate(x, y) << endl;
        break;    
        }
        }
    break;
    }

    default:
    {
     cout<<"Invalid choice"<<endl;
    break;
    }
}

}
cout << "Exiting Logic Gates Simulator..."<<endl;



return 0;
}


// g++ -std=c++17 -Wall -Wextra -I binary-digital-systems-simulator/include binary-digital-systems-simulator/src/main.cpp binary-digital-systems-simulator/src/binary/number_inspector.cpp binary-digital-systems-simulator/src/logic/logic_gates.cpp -o binary-digital-systems-simulator.exe
// .\binary-digital-systems-simulator.exe