// Exercise 3.41: Write a program to initialize a vector from an array of ints.

#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>


using namespace std;

int main()
{
    const int sz = 10;
    int a[sz];
    srand((unsigned)time(NULL));  // cstdlib
    cout << "the original array:" << endl;
    for(auto &z:a)
    {
        z = rand() % 100;
        cout << z << " ";
    }
    cout << endl;
    // initialize a vector from an array of ints.
    vector<int> v(begin(a), end(a));
    cout << "the vector:" << endl;
    for(auto &z:v)
    {
        cout << z << " ";
    }
    cout << endl;

    return 0;
}