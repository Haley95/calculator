#include <iostream>
#include <cmath>
using namespace std;

double add (double firstOperand, double secondOperand)
{
double result;
result = firstOperand + secondOperand;
}

double subtract (double firstOperand, double secondOperand)
{
double result;
result = firstOperand - secondOperand;
}

double multiply (double firstOperand, double secondOperand)
{
double result;
result = firstOperand * secondOperand;
}

double divide (double firstOperand, double secondOperand)
{
double result;
result = firstOperand / secondOperand;
}

int selectOperation(char candidateOperator)
{
'+', '-', '*', '/';
}


int main (int argc, char ** argv)
{
    if (argc != 4)
{
    cout<< "Enter 3 parameters!"<< endl;
}

    double firstOperand = atoi(argv[1]);
    double secondOperand = atoi(argv[3]);
    double result = 0;
    char candidateOperator = atoi(argv[2]);
  if (firstOperand == 0 || secondOperand == 0)
{
      cout<< "Zero is not allowed for either operand!"<< endl;
     return -1;
     }
 while (argv[2][0] == '+', '-', '*', '/')
{
    
if (argv[2][0] == '+')
{
    result = firstOperand += secondOperand;
    cout<< "The sum is " << result << endl;
    return result;
}
else if (argv[2][0] == '-')
 {
    result = firstOperand -= secondOperand;
    cout<< "The difference is " << result << endl;
    return result;
     }
else if (argv[2][0] == '*')
 {
    result = firstOperand *= secondOperand;
    cout<< "The product is "<< result << endl;
    return result;
 }
else if (argv[2][0] == '/')
 {
    result = firstOperand /= secondOperand;
    cout<< "The dividend is " << result << endl;
    return result;
 }
else
 {
   cout<< "Please select +, -, *, or / for the second argument." << endl;
   return -2;
}
     }
return 0;
 }