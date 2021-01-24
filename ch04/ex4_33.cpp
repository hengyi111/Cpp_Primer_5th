// Exercise 4.33: Using Table 4.12 (p. 166) explain what the following expression does:
// someValue ? ++x, ++y : --x, --y

#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20;
    bool flag = true;
    flag ? ++x, ++y : --x, --y;
    cout << x << endl;
    cout << y << endl;
    cout << flag << endl;
    cout << "-----" << endl;
    x = 10, y = 20;
    flag = false;
    flag ? ++x, ++y : --x, --y;
    cout << x << endl;
    cout << y << endl;
    cout << flag << endl;


}