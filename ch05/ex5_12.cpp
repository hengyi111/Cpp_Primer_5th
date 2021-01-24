// Exercise 5.12: Modify our vowel-counting program so that it counts the number of
// occurrences of the following two-character sequences: ff, fl, and fi.

#include <iostream>

using namespace std;

int main()
{
    unsigned int ff = 0, fl = 0, fi = 0;
    char ch, prech = '\0'; // escape the null
    cout << "please input a text:" << endl;

    while (cin >> ch)
    {
        bool flag = true;
        if (prech == 'f')
        {
            switch (ch)
            {
            case 'f':
                ++ff;
                flag = false;
                break;
            case 'l':
                ++fl;
                break;
            case 'i':
                ++fi;
                break;
            default:
                break;
            }
        }
        if(!flag)
        {
            prech = '\0';  // 配对出现两个f，则prech回归null
        }
        else
        {
            prech = ch;
        }
    
    }
    cout << "ff:" << ff << endl;
    cout << "fl:" << fl << endl;
    cout << "fi:" << fi << endl;

    return 0;
}