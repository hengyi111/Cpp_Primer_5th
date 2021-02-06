// Exercise 6.17: Write a function to determine whether a string contains any capital
// letters. Write a function to change a string to all lowercase. Do the parameters you
// used in these functions have the same type? If so, why? If not, why not?

//  a pointer to an int may be a int array

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int myCompare(const int val,const int *p)
{
    return (val > *p) ? val : *p;
}

int main()
{
    srand((unsigned)time(NULL));
    int a[10];
    for(auto &i:a)
    {
        i = rand() % 100;
    }
    cout << "input a number:" << endl;
    int i;
    cin >> i;
    cout << "the bigger one is:" << myCompare(i, a) << endl;
    cout << "the first number in array:" << *a << endl;
    return 0;

}