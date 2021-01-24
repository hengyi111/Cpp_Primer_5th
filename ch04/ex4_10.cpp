// Exercise 4.10: Write the condition for a while loop that would read ints from the
// standard input and stop when the value read is equal to 42.
#include<iostream>
using namespace std;
int main()
{
    int value;
    while(cin>>value&&value!=42){}
    cout << "end of codes" << endl;
    return 0;
}