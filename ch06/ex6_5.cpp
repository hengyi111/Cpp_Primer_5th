// Exercise 6.5: Write a function to return the absolute value of its argument

#include<iostream>


using namespace std;

double func(double val)
{
    if(val<0)
    {
        return -val;
    }
    else
    {
        return val;
    }
    
}

double func2(double val)
{
    return abs(val);
}

int main()
{
    cout << "please input a number:" << endl;
    int num;
    cin >> num;
    cout << "the result is:" << func2(num) << endl;
}