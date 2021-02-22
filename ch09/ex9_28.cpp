// Exercise 9.28: Write a function that takes a forward_list<string> and two additional string arguments. The function should find the first string and insert the
// second immediately following the first. If the first string is not found, then insert the
// second string at the end of the list.

#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void test_and_insert(forward_list<string> &list1, const string &s1, const string &s2)
{
    auto prev = list1.before_begin();
    auto curr = list1.begin();
    bool inserted = false;
    while (curr != list1.end())
    {
        if (*curr == s1)
        {
            curr = list1.insert_after(curr, s2);
            inserted = true;
        }
        prev = curr;
        ++curr;
    }
    if (!inserted)
    {
        list1.insert_after(prev, s2);
    }
}

int main()
{
    forward_list<string> ss = {"hello", "!", "world"};
    test_and_insert(ss, "hello", "nihao");
    for(auto v:ss)
    {
        cout << v << " ";
    }


    return 0;
}