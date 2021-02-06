// Exercise 6.3: Write and test your own version of fact.

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
    int ret = fact(5);
    cout << ret << endl;
    return 0;
}