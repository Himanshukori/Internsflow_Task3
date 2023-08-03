#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Calculator
{
public:
    void Add()
    {
        float a, b, add;
        cout << "Enter the 1st Number:";
        cin >> a;
        cout << "Enter the 2nd Number:";
        cin >> b;
        add = a + b;
        cout << "The addition of the given numbers is:";
        cout << fixed << setprecision(2) << add << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void Subtract()
    {
        float a, b, Sub;
        cout << "Enter the 1st Number:";
        cin >> a;
        cout << "Enter the 2nd Number:";
        cin >> b;
        Sub = a - b;
        cout << "The Subtraction of the given numbers is:";
        cout << fixed << setprecision(2) << Sub << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void divide()
    {
        int a, b, div;
        cout << "Enter the 1st Number:";
        cin >> a;
        cout << "Enter the 2nd Number:";
        cin >> b;
        div = a / b;
        cout << "The division of the given numbers is:" << div << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void Modulus()
    {
        int a, b, mod;
        cout << "Enter the 1st Number:";
        cin >> a;
        cout << "Enter the 2nd Number:";
        cin >> b;
        mod = a % b;
        cout << "The Modulus of the given numbers is:" << mod << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void logarithm()
    {
        double x, y;
        cout << "Enter the number: ";
        cin >> x;
        y = log10(x) / log10(2.00);
        cout << "The log to the base 2 of the given number is: ";
        cout << fixed << setprecision(2) << y << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void power()
    {
        float base, power, result;
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the power: ";
        cin >> power;
        result = pow(base, power);
        cout << base << "raise to the power" << power << "is:" << result << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void squareRoot()
    {
        float base, result;
        cout << "Enter the base: ";
        cin >> base;
        result = sqrt(base);
        cout << "The squareroot of the given number is: " << result << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void factorial()
    {
        int fact=1,x;
        cout<<"Enter the number: ";
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            fact=fact*i;
        }
        cout<<"The factorial of the given number is: "<<fact<<endl;
    }

    void Sine()
    {
        float angle, result;
        cout << "Enter the angle: ";
        cin >> angle;
        result = sin(angle);
        cout << "The sin of the given angle is: ";
        cout << fixed << setprecision(2) << result << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void Cosine()
    {
        float angle, result;
        cout << "Enter the angle: ";
        cin >> angle;
        result = cos(angle);
        cout << "The cos of the given angle is: ";
        cout << fixed << setprecision(2) << result << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }

    void Tangent()
    {
        float angle, result;
        cout << "Enter the angle: ";
        cin >> angle;
        result = sin(angle) / cos(angle);
        cout << "The tan of the given angle is: ";
        cout << fixed << setprecision(2) << result << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
    }
};

int main()
{
    int choice;
    Calculator obj;

    while (1)
    {
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Division\n";
        cout << "4. Modulus\n";
        cout << "5. Logrithm to Base 2\n";
        cout << "6. Power\n";
        cout << "7. Squareroot\n";
        cout << "8. Factorial\n";
        cout << "9. Sin\n";
        cout << "10. Cos\n";
        cout << "11. Tan\n";
        cout << "12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            obj.Add();
        }
        else if (choice == 2)
        {
            obj.Subtract();
        }
        else if (choice == 3)
        {
            obj.divide();
        }
        else if (choice == 4)
        {
            obj.Modulus();
        }
        else if (choice == 5)
        {
            obj.logarithm();
        }
        else if (choice == 6)
        {
            obj.power();
        }
        else if (choice == 7)
        {
            obj.squareRoot();
        }
        else if (choice == 8)
        {
            obj.factorial();
        }
        else if (choice == 9)
        {
            obj.Sine();
        }
        else if (choice == 10)
        {
            obj.Cosine();
        }
        else if (choice == 11)
        {
            obj.Tangent();
        }
        else if(choice==12) break;
        else
        {
            cout<<"Invalid Choice.";
            continue;
        }
    }
    return 0;
}