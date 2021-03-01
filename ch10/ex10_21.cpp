// Exercise 10.21: Write a lambda that captures a local int variable and decrements that
// variable until it reaches 0. Once the variable is 0 additional calls should no longer
// decrement the variable. The lambda should return a bool that indicates whether the
// captured variable is 0

#include <algorithm>
#include <iostream>

using namespace std;

void mutable_lambda(void)
{
    int i = 5;  // 局部变量
    // 改变局部变量，指定返回类型
    auto f = [i]() mutable -> bool {
        if (i > 0)
        {
            --i;
            return false;
        }
        else
        {
            return true;
        }
    };
    for (int j = 0; j < 6; ++j)
    {
        cout << f() << " ";
    }
    cout << endl;
}

int main()
{
    mutable_lambda();
    return 0;
}