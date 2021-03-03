// Exercise 12.7: Redo the previous exercise, this time using shared_ptr.

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>> new_vector(void)
{
    return make_shared<vector<int>>();
}

void read_ints(shared_ptr<vector<int>> pv)
{
    int v;
    while (cin >> v)
    {
        pv->push_back(v);
    }
}

void print_ints(shared_ptr<vector<int>> pv)
{
    for (const auto &v : *pv)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{
    auto pv = new_vector();
    if (!pv)
    {
        cout << "out of memory!" << endl;
        return -1;
    }
    read_ints(pv);
    print_ints(pv);
    // 不需要再额外进行delete删除

    return 0;
}