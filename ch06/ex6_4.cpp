// Exercise 6.4: Write a function that interacts with the user, asking for a number and
// generating the factorial of that number. Call this function from main.
#include<iostream>

using namespace std;

int fact(int val)
{
    int ret = 1;
    if(val<0)
    {
        return -1;
    }
    while(val>1)
    {
        ret *= val;
        --val;
    }
    return ret;
}

int main()
{
    cout << "please input a number:" << endl;
    int num;
    cin >> num;
    cout << "the result is:" << fact(num) << endl;
    return 0;
}