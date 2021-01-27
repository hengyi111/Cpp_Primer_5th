// Exercise 5.25: Revise your program from the previous exercise to use a try block to
// catch the exception. The catch clause should print a message to the user and ask
// them to supply a new number and repeat the code inside the try.

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    cout << "input n1,n2：" << endl;
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        try  // 这里的代码可能会有问题
        {
            if (n2 == 0)
            {
                throw runtime_error("n2 shouldn't be zero!");
            }
            cout << "result is :" << n1 / n2 << endl;
        }catch (runtime_error &err)
        {
            cout << err.what() << endl;
            cout << "continue? y or n>";
            char ch;
            cin >> ch;
            if(ch!='y')
                break;
        }
    }

    return 0;
}