// Exercise 3.40: Write a program to define two character arrays initialized from string
// literals. Now define a third character array to hold the concatenation of the two arrays.
// Use strcpy and strcat to copy the two arrays into the third.
#include<iostream>
#include<cstring>

using namespace std;

// 这段代码在Visual Studio 2017中无法运行，会报错。
// 因为不能用非常量初始化数组
int main()
{
    const char str1[] = "Hello ";
    const char str2[] = "World!";
    size_t new_size = strlen(str1) + strlen(str2) +1;
    cout << "the str1 length is:" << strlen(str1) << endl;
    cout << "the str2 length is:" << strlen(str2) << endl;
    cout << "the str3 length is:" << new_size << endl;
    // warning:expression must have a constant value
    char str3[new_size];
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << str3 << endl;
    return 0;
}