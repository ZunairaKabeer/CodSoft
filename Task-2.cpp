#include <iostream>
using namespace std;

// Function to add two numbers
double add(double n1, double n2)
{
    double n3 = n1 + n2;
    return n3;
}

// Function to subtract two numbers
double subtract(double n1, double n2)
{
    double n3 = n1 - n2;
    return n3;
}

// Function to multiply two numbers
double multiply(double n1, double n2)
{
    double n3 = n1 * n2;
    return n3;
}

// Function to divide two numbers
double divide(double n1, double n2)
{
    double n3 = n1 / n2;
    return n3;
}

int main()
{
    int n1;
    int n2;

    // Get user input for two numbers
    cout << "Enter number one: ";
    cin >> n1;

    cout << "Enter number two: ";
    cin >> n2;

    char op;

    // Get user input for the operation to perform
    cout << "Enter the operation you want to perform: " << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cin >> op;

    if (op == '+')
    {
        // Perform addition and display the result
        cout << n1 << " + " << n2 << " = " << add(n1, n2);
    }
    else if (op == '-')
    {
        // Perform subtraction and display the result
        cout << n1 << " - " << n2 << " = " << subtract(n1, n2);
    }
    else if (op == '*')
    {
        // Perform multiplication and display the result
        cout << n1 << " * " << n2 << " = " << multiply(n1, n2);
    }
    else if (op == '/')
    {
        // Perform division and display the result
        cout << n1 << " / " << n2 << " = " << divide(n1, n2);
    }
    else
    {
        // Display message for invalid operation
        cout << "Invalid operation";
    }

    return 0;
}
