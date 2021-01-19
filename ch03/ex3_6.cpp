//Exercise 3.6: Use a range for to change all the characters in a string to X.
#include<iostream>
#include<string>

using namespace std;

int main()
{

    string str1;
    cout << "please input string:" << endl;
    // read one line,including the whitespace,finish while meeting a newline
    getline(cin, str1);  
    for (auto &i:str1)  // the type should be inference
    {
        i = 'X';
    }
    cout << str1 << endl;
    return 0;
}