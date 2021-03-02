// Exercise 11.14: Extend the map of children to their family name that you wrote for the
// exercises in § 11.2.1 (p. 424) by having the vector store a pair that holds a child’s
// name and birthday.

#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    map<string, vector<pair<string, string>>> families;
    families["liu"].push_back(pair<string, string>("wu", "1999-9-9"));
    families["liu"].push_back(make_pair("liu", "1888-8-8"));

    for (auto f : families)
    {
        cout << f.first << "家的" << endl;
        for (auto c : f.second)
        {
            cout << c.first << " " << c.second<<endl;
        }
    }

    return 0;
}