#include <iostream>
#include <cmath>

using namespace std;

double Addition(double x, double y);
double Subtraction(double x, double y);
double Multiplication(double x, double y);
double Division(double x, double y);

int main(){

double x, y, Result;
char Operation;

cout << "******Welcome to Hillary's Calculator******" << endl;
cout << "Enter the first value: ";
cin >> x;
cout << "Enter the second value: ";
cin >> y;
cout << "Choose your Operation (+,-,*,/): ";
cin >> Operation;

switch(Operation){
    case '+':
    Result = Addition(x, y);
    break;
    case '-':
    Result = Subtraction(x, y);
    break;
    case '*':
    Result = Multiplication(x, y);
    break;
    case '/':
    if(y != 0){
    Result = Division(x, y);
    }
    else {
        cout << "Division by 0 is not allowed" << endl;
        return 1; 
    }
    break;
    default:
    cout << "Operation Invalid" << endl;
    return 1;
    }

    
    cout << "Your result is: " << Result << endl;
    cout << "********************************************" << endl;
    return 0;
}

double Addition(double x, double y)
{
    return x + y;
}
double Subtraction(double x, double y)
{
    return x - y;
}
double Multiplication(double x, double y)
{
    return x * y;
}
double Division(double x, double y)
{
    return x / y;
}
