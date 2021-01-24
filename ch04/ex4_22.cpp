// Exercise 4.22: Extend the program that assigned high pass, pass, and fail grades to
// also assign low pass for grades between 60 and 75 inclusive. Write two versions: One
// version that uses only conditional operators; the other should use one or more if
// statements. Which version do you think is easier to understand and why?

#include<iostream>
#include<string>

using namespace std;
int main()
{
    string out;
    int score;
    cout << "input your score:" << endl;
    // read in and compare the score with 0 and 100
    while (cin >> score && score <= 100 && score >= 0)
    {
        out = (score > 90) ? "highpass" : (score > 75) ? "pass" : (score) > 60 ? "low pass" : "fail";
        cout << out<<endl;
        cout<<"input your score:" << endl;
    }
    return 0;
}