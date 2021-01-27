// Exercise 5.24: Revise your program to throw an exception if the second number is
// zero. Test your program with a zero input to see what happens on your system if you
// don’t catch an exception.

#include<iostream>
#include<stdexcept>

using namespace std;

int main()
{
    cout << "input n1,n2：" << endl;
    int n1, n2;
    cin >> n1 >> n2;
    if(n2==0)
    {
        throw runtime_error("n2 shouldn't be zero!");
    }

    cout << "result is :" << n1 / n2 << endl;
    return 0;
}