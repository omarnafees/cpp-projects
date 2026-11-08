#include "logic/logic_gates.hpp"
#include "binary/number_inspector.hpp"
#include "binary/binary_arithmetic.hpp"
#include <iostream>
using namespace std;

void numberSystem()
{
    int enteredNum;

    while (true)
    {
        cout << "-------------------" << endl;
        cout << "===Number Systems & Binary Tools===" << endl;
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

    displayUnsigned(enteredNum);
    displayDecimal(enteredNum);
    displayBinary(enteredNum);
    display8BitBinary(enteredNum);
    displayOctal(enteredNum);
    displayHexadecimal(enteredNum);
    displaySize(enteredNum);
}

void logicGates()
{

    while (true)
    {

        int choice;
        cout << "-------------------" << endl;
        cout << "===Logic Gates===" << endl;
        cout << "1.AND" << endl;
        cout << "2.OR" << endl;
        cout << "3.NOT" << endl;
        cout << "4.XOR" << endl;
        cout << "5.NAND" << endl;
        cout << "6.NOR" << endl;
        cout << "0.Back" << endl;

        int x, y;
        while (true)
        {
            cout << "Choose a gate (1-6) or 0 to go back: ";

            cin >> choice;

            if (cin.fail())
            {
                cout << "Invalid input! Enter a number." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
            else if (choice < 0 || choice > 6)
            {
                cout << "Invalid choice! Choose between 0 and 6." << endl;
            }
            else
            {
                break;
            }
        }

        if (choice == 0)
            break;
        switch (choice)
        {

        case 1:
        {
            cout << "AND Gate selected" << endl;
            cout << "Boolean Expression: Y = A . B" << endl;
            cout << "Truth Table:" << endl;
            cout << "A   B   Y" << endl;
            cout << "----------" << endl;
            cout << "0   0   0" << endl;
            cout << "0   1   0" << endl;
            cout << "1   0   0" << endl;
            cout << "1   1   1" << endl;
            while (true)
            {
                cout << "Enter two binary inputs (0 or 1): ";
                cin >> x >> y;
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

            cout << "OR Gate selected" << endl;
            cout << "Boolean Expression: Y= A + B" << endl;
            cout << "Truth Table:" << endl;
            cout << "A   B   Y" << endl;
            cout << "----------" << endl;
            cout << "0   0   0" << endl;
            cout << "0   1   1" << endl;
            cout << "1   0   1" << endl;
            cout << "1   1   1" << endl;
            while (true)
            {
                cout << "Enter two binary inputs (0 or 1): ";
                cin >> x >> y;
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

            cout << "NOT Gate selected" << endl;
            cout << "Boolean Expression: Y= NOT A" << endl;
            cout << "Truth Table:" << endl;
            cout << "A   Y" << endl;
            cout << "-----" << endl;
            cout << "0   1" << endl;
            cout << "1   0" << endl;
            while (true)
            {
                cout << "Enter one binary input (0 or 1): ";
                cin >> x;

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

            cout << "XOR Gate selected" << endl;
            cout << "Boolean Expression: Y= A ^ B" << endl;
            cout << "Truth Table:" << endl;
            cout << "A   B   Y" << endl;
            cout << "----------" << endl;
            cout << "0   0   0" << endl;
            cout << "0   1   1" << endl;
            cout << "1   0   1" << endl;
            cout << "1   1   0" << endl;
            while (true)
            {
                cout << "Enter two binary inputs (0 or 1): ";
                cin >> x >> y;
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

            cout << "NAND Gate selected" << endl;
            cout << "Boolean Expression: Y= !(A . B)" << endl;
            cout << "Truth Table:" << endl;
            cout << "A   B   Y" << endl;
            cout << "----------" << endl;
            cout << "0   0   1" << endl;
            cout << "0   1   1" << endl;
            cout << "1   0   1" << endl;
            cout << "1   1   0" << endl;
            while (true)
            {
                cout << "Enter two binary inputs (0 or 1): ";
                cin >> x >> y;

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

            cout << "NOR Gate selected" << endl;
            cout << "Boolean Expression: Y= !(A + B)" << endl;
            cout << "Truth Table:" << endl;
            cout << "A   B   Y" << endl;
            cout << "----------" << endl;
            cout << "0   0   1" << endl;
            cout << "0   1   0" << endl;
            cout << "1   0   0" << endl;
            cout << "1   1   0" << endl;
            while (true)
            {
                cout << "Enter two binary inputs (0 or 1): ";
                cin >> x >> y;
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
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
    cout << "Returning to main menu..." << endl;
}

void binaryarithmetics()
{
    while (true)
    {

        int choice;
        cout << "-------------------" << endl;
        cout << "===Binary Arithmetics===" << endl;
        cout << "1.Binary Addition" << endl;
        cout << "2.Binary Subtraction" << endl;
        cout << "0.Back" << endl;

        while (true)
        {
            cout << "Choose an operation (1-2) or 0 to go back: ";

            cin >> choice;
            if (cin.fail())
            {
                cout << "Invalid input! Enter a number." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
            else if (choice < 0 || choice > 2)
            {
                cout << "Invalid choice! Choose 0, 1, or 2." << endl;
            }
            else
            {
                break;
            }
        }

        if (choice == 0)
        {
            cout << "Returning to main menu..." << endl;
            break;
        }

        switch (choice)
        {
        case 1:
        {
            string x, y;
            cout << "Binary Addition selected" << endl;
            cout << "Enter two 4-bit binary numbers (e.g., 1010):" << endl;
            cout << "Enter first binary number: ";
            cin >> x;
            cout << "Enter second binary number: ";
            cin >> y;

            cout << "Result: " << binaryaddition(x, y) << endl;
            break;
        }

        case 2:
        {
            string x, y;
            cout << "Binary Subtraction selected" << endl;
            cout << "Enter two 4-bit binary numbers (e.g., 1010):" << endl;
            cout << "Enter first binary number: ";
            cin >> x;
            cout << "Enter second binary number: ";
            cin >> y;

            cout << "Result: " << binarysubtraction(x, y) << endl;
            break;
        }
        }
    }
}
int main()
{
    int choice;
    while (true)
    {
        cout << "====================================" << endl;
        cout << "     Digital Systems Simulator     " << endl;
        cout << "====================================" << endl;

        cout << "Welcome! Choose a tool to get started" << endl;
        cout << "1.Number Systems & Binary Tools" << endl;
        cout << "2.Digital Logic Gates" << endl;
        cout << "3.Binary Arithmetic" << endl;

        cout << "0.Exit" << endl;
        cout << "Enter your choice: ";
        while (true)
        {
            cin >> choice;

            if (cin.fail())
            {
                cout << "Invalid input! Try again." << endl;

                cin.clear();
                cin.ignore(10000, '\n');
            }
            else if (choice < 0 || choice > 3)
            {
                cout << "Invalid choice! Choose between 0 and 3." << endl;
            }
            else
            {
                break;
            }
        }
        switch (choice)
        {
        case 1:
            numberSystem();
            break;

        case 2:
            logicGates();
            break;

        case 3:
            binaryarithmetics();
            break;

        case 0:
            cout << "Goodbye!" << endl;
            return 0;
        }
    }
    return 0;
}
