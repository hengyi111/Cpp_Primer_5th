// Exercise 11.31: Write a program that defines a multimap of authors and their works.
// Use find to find an element in the multimap and erase that element. Be sure your
// program works correctly if the element you look for is not in the map

// writer and books
// Abby:the 100,the last ship
// Bob:witcher,flower

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void print_books(multimap<string, string> &mm)
{
    cout << "当前书目包括：" << endl;
    for (auto book : mm)
    {
        cout << book.first << ",《" << book.second << "》" << endl;
    }
    cout << endl;
}

int main()
{
    multimap<string, string> mm;
    mm.insert({"Abby", "the 100"});
    mm.insert({"Bob", "witcher"});
    mm.insert({"Abby", "the last ship"});
    mm.insert({"Bob", "flower"});
    print_books(mm);

    // 1. equal_range
    // auto pos = mm.equal_range("Bob");
    // if (pos.first == pos.second)
    // {
    //     cout << "没有此作者！" << endl;
    // }
    // else
    // {
    //     mm.erase(pos.first, pos.second);
    // }

    // 2.lower_bound,upper_bound
    mm.erase(mm.lower_bound("Bob"), mm.upper_bound("Bob"));
    
    print_books(mm);

    return 0;
}
