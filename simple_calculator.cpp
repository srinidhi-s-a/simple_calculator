#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

    float res;


int main()
{
    char operatorSymbol;
    int operand1, operand2;
    int type;
    int result;
    float a, b;
    int z;
    cout << "For Basic operation press 1:" << endl;
    cout << "For Digital operation press 2:" << endl;
    cin >> type;
    if (type == 1)
    {

        cout << "Enter operator (+, -, *, /) = ";
        cin >> operatorSymbol;

        cout << "Enter operand 1= ";
        cin >> operand1;

        cout << "Enter operand 2= ";
        cin >> operand2;

        switch (operatorSymbol)
        {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = operand1 / operand2;
            break;
        default:
            cout << "Invalid operator!";
            return 0;
        }
        ofstream outputFile("calculator_results.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << operand1 << " " << operatorSymbol << " " << operand2 << " = " << result << endl;
            outputFile.close();
            cout << "Calculation result stored in 'calculator_results.txt' file." << endl;
        }
        else
        {
            cout << "Error opening the file!" << endl;
        }

        return 0;
    }
    else if (type == 2)
    {
        cout << "Digital part" << endl;
        

        void Power(float, float);
        void Sine(float);
        void Square(float);
        void Cos(float);
        void Tan(float);
        void Log(float);
        void Baselog(float);
        cout << "WHAT YOU WANT TO FIND: " << endl;
        cout << "Press '1' for Power: " << endl;
        cout << "Press '2' for Sin: " << endl;
        cout << "Press '3' for Square: " << endl;
        cout << "Press '4' for Cos: " << endl;
        cout << "Press '5' for Tan: " << endl;
        cout << "Press '6' for Log: " << endl;
        cout << "Press '7' for Base Log: " << endl;

        cin >> z;
        switch (z)
        {
        case 1:
            cout << "Enter the Number for Calculating its Power: " << endl;
            cout<<"a="<<endl;
            cin >> a;
            cout << "Enter the Power for a Number: " << endl;
            cout<<"b="<<endl;
            cin >> b;
            Power(a, b);
            break;

        case 2:
            cout << "Enter the Number for Calculating SIN: " << endl;
            cin >> a;
            Sine(a);
            break;

        case 3:
            cout << "Enter the Number for Calculating Square: " << endl;
            cin >> a;
            Square(a);
            break;

        case 4:
            cout << "Enter the Number for Calculating COS: " << endl;
            cin >> a;
            Cos(a);
            break;

        case 5:
            cout << "Enter the Number for Calculating TAN: " << endl;
            cin >> a;
            Tan(a);
            break;

        case 6:
            cout << "Enter the Number for Calculating LOG: " << endl;
            cin >> a;
            Log(a);
            break;

        case 7:
            cout << "Enter the Number for Calculating LOG WITH BASE 10: " << endl;
            cin >> a;
            Baselog(a);
            break;
        }
        ofstream outputFile("calculator_results.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile <<"The result is "<<res<< endl;
            outputFile.close();
            cout << "Calculation result stored in 'calculator_results.txt' file." << endl;
        }
        else
        {
            cout << "Error opening the file!" << endl;
        }

        return 0;
    }
    else
    {
        cout << "Enter the required number as given above" << endl;
    }
}
void Power(float x, float y)
{
    
    res= pow(x, y);
    
}

void Sine(float x)
{
   
    res = sin(x);
    
}

void Square(float x)
{
    
    res = sqrt(x);  
    
}

void Cos(float x)
{
    
    res = cos(x);
    
}

void Tan(float x)
{
    
    res = tan(x);
    
}

void Log(float x)
{
   
    res = log(x);
    
}

void Baselog(float x)
{
    
    res = log10(x);
    
}