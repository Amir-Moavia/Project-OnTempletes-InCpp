#include <iostream>
#include <cstdlib> 
using namespace std;

template <typename T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;  
        num2 = n2;
    }

    T Addition() { return num1 + num2; }
    T Subtraction() { return num1 - num2; }
    T Multiplication() { return num1 * num2; }
    T Division()
    {
        if (num2 == 0)
        {
            cout << "Error! Division by zero.\n";
            return 0;
        }
        return num1 / num2;
    }
};


template <typename T>
void performCalculation()
{
    T a, b;
    cout << "\nEnter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    Calculator<T> calc(a, b);

    int choice;
    cout << "\n=== Choose Operation ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter Your Choice: ";
    cin >> choice;

    cout << "\n==============================\n";

    switch (choice)
    {
    case 1:
        cout << "Result: " << calc.Addition();
        break;
    case 2:
        cout << "Result: " << calc.Subtraction();
        break;
    case 3:
        cout << "Result: " << calc.Multiplication();
        break;
    case 4:
        cout << "Result: " << calc.Division();
        break;
    default:
        cout << "Invalid Choice!";
    }

    cout << "\n==============================\n";
}

int main()
{
    
    system("color 06");

    cout << "==============================\n";
    cout << "    WELCOME TO CALCULATOR     \n";
    cout << "==============================\n";

    char again;

    do
    {
        cout << "\nSelect Value Type:\n";
        cout << "1. Integer\n";
        cout << "2. Float\n";
        cout << "3. Double\n";
        cout << "Enter Your Choice: ";

        int type;
        cin >> type;

        switch (type)
        {
        case 1:
            performCalculation<int>();
            break;
        case 2:
            performCalculation<float>();
            break;
        case 3:
            performCalculation<double>();
            break;
        default:
            cout << "Invalid Type Selection!";
        }

        cout << "\n\nDo you want to perform another calculatio ? (y/n): ";
        cin >> again;

       
        system("color 0A");
    } while (again == 'y' || again == 'Y');

    system("color 07"); 
    cout << "\nThank you for using the Calculator!\n";

    return 0;
}
