// Exercise 11.7: Define a map for which the key is the family’s last name and the value
// is a vector of the children’s names. Write code to add new families and to add new
// children to an existing family.

#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main()
{
    map<string, vector<string>> families;
    //families["张"] = vector<string>();
    vector<string> vs = {"张三","张思"};
    families["张"] = vs;
    for(auto f:families)
    {
        cout << f.first << "家的";
        for(auto c:f.second)
        {
            cout << c << " ";

        }
    }

    return 0;
}