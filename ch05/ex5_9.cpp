// Exercise 5.9: Write a program using a series of if statements to count the number of
// vowels in text read from cin.
#include<iostream>
using namespace std;

int main()
{
    char ch;
    unsigned vowelCnt = 0;
    cout << "input text:" << endl;
    while(cin>>ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            ++vowelCnt; 
    }
    cout << "there are " << vowelCnt << " vowels!" << endl;
    return 0;
}