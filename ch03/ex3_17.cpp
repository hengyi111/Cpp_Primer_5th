//Exercise 3.17: Read a sequence of words from cin and store the values a vector. 
//After you’ve read all the words, process the vector and change each word to uppercase.
//Print the transformed elements, each words to a line.
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    string s;
    vector<string> v;
    cout << "input a sequence of words:"<< endl;
    char c = 'y';

    while(cin>>s)
    {
        // for charaters,convert lowercase to uppercase
        for(auto &i:s)
        {
            i = toupper(i);  
        }
        v.push_back(s);
        cout << "continue? y or n?" << endl;
        cin >> c;
        if(c!='y')
        {
            break;
        }
    }

    for(auto element:v)
    {
        cout << element << endl;
    }
    return 0;
}