#include <iostream>

using namespace std;

//addition
long double add(long double num1, long double num2)
{
    long double result;
    {
        result = num1 + num2;
    }
    return result;
}
//subtraction
long double sub(long double num1a, long double num2a)
{
    long double resulta;
    {
        resulta = num1a - num2a;
    }
    return resulta;
}
//multiplication
long double mltp(long double num1b, long double num2b)
{
    long double resultb;
    {
        resultb = num1b * num2b;
    }
    return resultb;
}
//division
long double dv(long double num1c, long double num2c)
{
    long double resultc;
    {
        resultc = num1c / num2c;
    }
    return resultc;
}
//exponent
long double power(long double base, long double exponent)
{
    long double resultd = 1;
    for(long double i = 0; i < exponent; i++)
    {
       resultd = base * resultd; 
    }
    return resultd;
}

int panel;
long double a;
long double b;

void ctrl_panel()
{
    cout << "Control Panel\n\nOperators: \n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exponent\n6.Multiplication Table\n7.Celcius to Farenheit\n8.Farenheit to Celcius\n\n0.Back\n";
    cin >> panel;
    switch(panel)
    {
        case 0:
            return;
            break;
        case 1:
            cout << "Addition\n\nFirst Number: \n";
            cin >> a;
            cout << "Second Number: \n";
            cin >> b;
            cout << add(a, b) << endl << endl;
            break;
        case 2:
            cout << "Subtraction\n\nFirst Number: \n";
            cin >> a;
            cout << "Second Number: \n";
            cin >> b;
            cout << sub(a, b) << endl << endl;
            break;
        case 3:
            cout << "Multiplication\n\nFirst Number: \n";
            cin >> a;
            cout << "Second Number: \n";
            cin >> b;
            cout << mltp(a, b) << endl << endl;
            break;
        case 4:
            cout << "Division\n\nFirst Number: \n";
            cin >> a;
            cout << "Second Number: \n";
            cin >> b;
            cout << dv(a, b) << endl << endl;
            break;
        case 5:
            cout << "Exponent\n\nBase: \n";
            cin >> a;
            cout << "Power: \n";
            cin >> b;
            cout << power(a, b) << endl << endl;
            break;
        case 7:
            cout << "Celcius to Farenheit\n\nTemperature: \n";
            cin >> a;
            cout << a * 1.8 + 32 << "℉" << endl << endl;
            break;
        case 8:
            cout << "Farenheit to Celcius\n\nTemperature: \n";
            cin >> a;
            cout << (a - 32) * 5/9 << "℃" << endl << endl;
            break;
        case 6:
            cout << "Multiplication table\n\nPlease select a number you want to show the table of: \n";
            int num;
            cin >> num;
            int num2 = 0;
            cout << "Range: \n";
            int range;
            cin >> range;
    
            for(int i = 0; i < range; i++)
            {
                num2++;
                cout << num << " x " << num2 << " = " << num * num2 << endl << endl;
            }
            break; 
        }
}

int main()
{
    int choice;
    do
    {
        cout << "Welcone to NemoNet Calculator\n\n1.Enter\n0.Quit\n\n";
        cout << " contact NemoNet on: \n\nGitHub\n";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                ctrl_panel();
                break;
            case 0:
                return 0;
                break;
        }
    }
    while(choice != 0);
}
