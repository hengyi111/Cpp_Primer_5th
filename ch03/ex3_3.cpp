//Exercise 3.3: Explain how whitespace characters are handled in the string input 
//operator and in the getline function.
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string word, line;
    cout << "选择读取方式，1表示逐词读取，2表示逐行读取" << endl;
    char choice;
    cin >> choice;
    if (choice == '1')
    {
        cout << "please input [  welcome to C++！  ]" << endl;
        cin >> word;
        cout << "word:" << endl;
        cout << word << endl;
        return 0;
    }

    cin.clear(); // 用来清空输入缓冲区
    cin.sync();

  
    if (choice == '2')
    {
        cout << "please input [  welcome to C++！  ]" << endl;
        getline(cin, line);
        cout << "line:" << endl;
        cout << line << endl;
        return 0;
    }

    cout << "input error!" << endl;
    return -1;
}