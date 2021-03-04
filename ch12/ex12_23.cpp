// Exercise 12.23: Write a program to concatenate two string literals, putting the result
// in a dynamically allocated array of char. Write a program to concatenate two library
// strings that have the same value as the literals used in the first program.

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char *c1 = "Hello ";
    const char *c2 = "World";
    // 多一个，存放结束符'\0'
    char *r = new char[strlen(c1) + strlen(c2) + 1];
    strcpy(r, c1); // 拷贝第一个字符串常量
    strcat(r, c2); // 连接第二个字符串常量
    cout << r << endl;

    string s1 = "Hello ";
    string s2 = "World";
    // 依旧是拷贝
    strcpy(r, (s1 + s2).c_str());
    cout << r << endl;
    delete[] r;
    return 0;
}