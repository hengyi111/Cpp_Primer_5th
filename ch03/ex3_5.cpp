//Exercise 3.5: Write a program to read strings from the standard input, 
//concatenating what is read into one large string. Print the concatenated string. 
//Next, change the program to separate adjacent input strings by a space.

#include<iostream>
#include<string>

using namespace std;

int main1()
{
    string result, str;
    char c;  // determine continue or not
    cout << "please input strings" << endl;
    while(cin>>str)
    {
        result += str;
        cout << "continue?(y)es or (n)o?" << endl;
        cin >> c;
        if(c=='y')
        {
            cout << "please input strings" << endl;
        }
        else
        {
            break;
        }
    }
    cout << "the result is:\n" << result << endl;
    return 0;
}

int main()
{
    string result, str;
    char c;
    cout << "please input strings" << endl;
    while(cin>>str)
    {
        result += str;
        cout << "continue?(y)es or (n)o?" << endl;
        cin >> c;
        if(c=='y')
        {
            cout << "please input strings" << endl;
            // if have new string,add spacewhite after the old string
            result += " ";  
        }
        else
        {
            break;
        }
    }
    cout << "the result is:\n" << result << endl;
 
    return 0;
}