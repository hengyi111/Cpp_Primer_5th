// Exercise 3.23: Write a program to create a vector with ten int elements. Using an
// iterator, assign each element a value that is twice its current value. Test your program
// by printing the vector.

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<int> v;
    // generate random seed
    srand((unsigned)time(NULL));  
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);  // read in random numbers
    }

    cout << "the original numbers:" << endl;
    for (auto it = v.cbegin(); it != v.cend();++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "the twice numbers:" << endl;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        *it = 2 * (*it);
    }

    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}