#include<iostream>//header file 
#include<cmath>//header file for math 
using namespace std;//standardization 
class calculator {
//specifer
public :  
// Addition
int sum(int a, int b)
{
    return a + b;
}
// Subtraction
int sub(int a, int b)
{
    return a - b;
}
// Multiplication
int multi(int a, int b)
{
    return a * b;
}
// Division
float divide(int a, int b)
{
    if(b == 0)
    {
        cout << "Division by zero not possible "<< endl;
        return 0;
    }

    return (float)a / b;
}

// Power
float power(int a, int b)
{
    return pow(a, b);
}

// Square Root
float squareroot(int a)
{
    if(a < 0)
    {
        cout << "Square root of negative number is not  possible"<< endl;
        return 0;
    }
    return sqrt(a);
}
};
  // Main function 
int main()
{
calculator aa;
    int a, b;
    // First number input
    cout << "Enter 1st number: ";
    while(!(cin >> a))//condition
    {
        cin.clear();
// Built in function used for error checking    cin.ignore(1000,'\n');
        cout << "Invalid input  Enter number again: ";
    }
    // Second number input
    cout << "Enter 2nd number: ";
    while(!(cin >> b))//condition 
    {// Built in function used for error
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Enter number again: ";
    }
    cout << "Addition = "<<aa . sum(a, b) << endl;

    cout << "Subtraction = "<< aa.sub(a, b) << endl;
  
 cout<<"Multiplication = "<< aa. multi(a, b) << endl;

 cout << "Division = "<< aa.divide(a, b) << endl;

    cout << "Power = " << aa.power(a, b) << endl;

    cout << "Square Root of first number = "<<aa.squareroot(a)<<endl;
}
