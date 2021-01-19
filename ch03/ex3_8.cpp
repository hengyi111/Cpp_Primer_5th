//Exercise 3.8: Rewrite the program in the first exercise, first using a while and again
//using a traditional for loop. Which of the three approaches do you prefer and why?
#include<iostream>
#include<string>

using namespace std;

int main1()
{
    string str1;
    cout << "please input string:" << endl;
    // read one line,including the whitespace,finish while meeting a newline
    getline(cin, str1);
    for (decltype(str1.size()) index = 0; index < str1.size();++index)
    {
        str1[index] = 'X';
    }
    cout << str1 << endl;
    return 0;
}

int main()
{
    string str1;
    cout << "please input string:" << endl;
    // read one line,including the whitespace,finish while meeting a newline
    getline(cin, str1);
    decltype(str1.size()) index = 0;
    while(str1[index]!='\0')
    {
        str1[index] = 'X'; 
        ++index;  // increment after assignment
    }
    cout << str1 << endl;
    return 0;
}