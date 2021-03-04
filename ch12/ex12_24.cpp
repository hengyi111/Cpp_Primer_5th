// Exercise 12.24: Write a program that reads a string from the standard input into a
// dynamically allocated character array. Describe how your program handles varying
// size inputs. Test your program by giving it a string of data that is longer than the array
// size you’ve allocated.

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char c;
    char *r = new char[20];
    int L = 0;
    while(cin.get(c))  // 可以读入空格等空白符
    {
        if(isspace(c))  // 只要遇到空格，就结束
            break;
        r[L++] = c;  // 存入动态数组
        if(L==20)
        {
            cout << "达到数组容器上限" << endl;
            break;
        }
    }
    r[L] = 0;
    cout << r << endl;
    delete[] r;
    return 0;
}