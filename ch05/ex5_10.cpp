// Exercise 5.10: There is one problem with our vowel-counting program as we’ve implemented it: It doesn’t count capital letters as vowels. Write a program that counts
// both lower- and uppercase letters as the appropriate vowel—that is, your program
// should count both ’a’ and ’A’ as part of aCnt, and so forth.
#include<iostream>
using namespace std;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    cout << "input text:" << endl;
    while(cin>>ch)
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
        
        default:
            break;
        }
    }
    cout << "a:" << aCnt << endl;
    cout << "e:" << eCnt << endl;
    cout << "i:" << iCnt << endl;
    cout << "o:" << oCnt << endl;
    cout << "u:" << uCnt << endl;
    return 0;
}
