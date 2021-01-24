// Exercise 5.11: Modify our vowel-counting program so that it also counts the number
// of blank spaces, tabs, and newlines read.

#include<iostream>
using namespace std;

// 读入特殊字符，需要使用cin.get(ch)
//get 成员函数读取单个字符，包括任何白色空格字符
//cin.get (ch);
//ch = cin.get(); 两种调用方式
int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    char ch;
    cout << "input text:" << endl;
    while(cin.get(ch))
    {
        switch (ch)
        {
        case 'a':
        case 'A':
            ++aCnt;
            break;

        case 'e':
        case 'E':
            ++eCnt;
            break;
        case 'i':
        case 'I':
            ++iCnt;
            break;
        case 'o':
        case 'O':
            ++oCnt;
            break;
        case 'u':
        case 'U':
            ++uCnt;
            break;
        case ' ':
            ++spaceCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++newlineCnt;
            break;

        default:
            break;
        }
    }
    cout << "a:" << aCnt << endl;
    cout << "e:" << eCnt << endl;
    cout << "i:" << iCnt << endl;
    cout << "o:" << oCnt << endl;
    cout << "u:" << uCnt << endl;
    cout << "space:" << spaceCnt << endl;
    cout << "tab:" << tabCnt << endl;
    cout << "newline:" << newlineCnt << endl;
    return 0;
}
