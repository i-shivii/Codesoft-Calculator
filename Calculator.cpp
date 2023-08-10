//  Author: Codesoft virtual Internship 2023
//  language used: C++
//  Topic: Calculator 

#include <iostream>
#include <cmath>
#include <iomanip> //for setprecision
#include <algorithm>
#include <unistd.h>
using namespace std;

float sum(float x, float y)
{
    int S = x + y;
    return S;
}

float diff(float x, float y)
{
    int D = (x > y) ? (x - y) : (y - x);

    return D;
}

float mul(float x, float y)
{
    int M = (x * y);
    return M;
}

float dev(float x, float y)
{
    float d = x / y;
    return d;
}

int main()
{
    float A, B;
    char op;
Input:
    cout << "Enter the numbers";
    cin >> A >> B;
    cout << endl;

    cout << "Enter the operation performed";
    cin >> op;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "calculating your Result...." << endl;

    sleep(3);
    switch (op)
    {
    case '+':
    {

        cout << "Result is: " << sum(A, B) << endl;
        break;
    }

    case '-':
    {
        cout << "Result is: " << diff(A, B) << endl;
        break;
    }
    case '/':
    {
        if (B == 0)
        {
            cout << "invalid input.Attempted to divide by zero. Please try again" << endl;
            goto Input;
            break;
        }
        else
        {
            cout << "Result is: " << setprecision(3) << dev(A, B) << endl;
            break;
        }
    }
    case '*':
    {
        cout << "Result is: " << setprecision(3) << mul(A, B) << endl;
        break;
    }

    default:
    {
        cout << "invalid operation" << endl;
        break;
    }
    }

    return 0;
}