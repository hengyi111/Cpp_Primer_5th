// Exercise 7.32: Define your own versions of Screen and Window_mgr in which
// clear is a member of Window_mgr and a friend of Screen.

#include <iostream>
#include <string>

using namespace std;

// 本题的重点在于，组织结构
class Window_mgr
{
public:
    void clear(); //先声明，但不能定义
};

class Screen
{
    friend void Window_mgr::clear();

private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;

public:
    Screen() = default;
    Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' '){};
    Screen(unsigned ht, unsigned wd, char c)
        : height(ht), width(wd), contents(ht * wd, 'c'){};
};

void Window_mgr::clear()
{
    Screen myScreen(10, 20, 'X');
    cout << "Before!" << endl;
    cout << myScreen.contents << endl;
    myScreen.contents = "";
    cout << "After!" << endl;
}

int main()
{
    Window_mgr w;
    w.clear();
    return 0;
}