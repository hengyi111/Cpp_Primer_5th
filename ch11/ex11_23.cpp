// Exercise 11.23: Rewrite the map that stored vectors of children’s names with a key
// that is the family last name for the exercises in § 11.2.1 (p. 424) to use a multimap.

#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

// multimap没有索引，使用insert来插入
int main()
{
    multimap<string, vector<string>> families;
    //families["张"] = vector<string>();
    vector<string> vs = {"张三","张思"};
    families.insert({"张", vs});
    for(auto f:families)
    {
        cout << f.first << "家的"<<endl;
        for(auto c:f.second)
        {
            cout << c << " ";

        }
    }

    return 0;
}