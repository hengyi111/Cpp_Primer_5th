// Exercise 12.6: Write a function that returns a dynamically allocated vector of ints.
// Pass that vector to another function that reads the standard input to give values to
// the elements. Pass the vector to another function to print the values that were read.
// Remember to delete the vector at the appropriate time.

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

vector<int> *new_vector(void)
{
    return new (nothrow) vector<int>;
}

void read_ints(vector<int> *pv)
{
    int v;
    while (cin >> v)
    {
        pv->push_back(v);
    }
}

void print_ints(vector<int> *pv)
{
    for (const auto &v : *pv)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> *pv = new_vector();
    if (!pv)
    {
        cout << "out of memory!" << endl;
        return -1;
    }
    read_ints(pv);
    print_ints(pv);

    delete pv;
    pv = nullptr;

    return 0;
}