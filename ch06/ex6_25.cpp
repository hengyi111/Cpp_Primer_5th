// Exercise 6.25: Write a main function that takes two arguments. Concatenate the supplied arguments and print the resulting string.


#include<iostream>
#include<string>
using namespace std;

// msvs中用空格分开多个参数
int main(int argc,char *argv[])
{
    string str;
    for (int i = 1; i != argc;++i)
    {
        str += argv[i];
    }
    cout << str << endl;
    
    for (int i = 0; i != argc;++i)
    {
        cout << "argv[" << i << "]:" << argv[i] << endl;
    }

    return 0;
}