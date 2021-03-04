#ifndef MY_STRBLOB_H
#define MY_STRBLOB_H
// 习题集中还有更加长的版本
#include <initializer_list>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

// 提前声明，StrBlob中的友元类声明需要这个
class StrBlobPtr;

class StrBlob
{
    friend class StrBlobPtr;

public:
    using size_type = vector<string>::size_type;
    // 构造函数
    StrBlob() : data(std::make_shared<vector<string>>()) {}
    StrBlob(std::initializer_list<string> il) : data(std::make_shared<vector<string>>(il)) {}

    // 判断大小和是否为空
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    // 添加和删除元素
    void push_back(const string &t) { data->push_back(t); }
    void pop_back()
    {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }
    // 元素访问，非const类型
    std::string &front()
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    std::string &back()
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }

    // 元素访问，const类型
    const std::string &front() const
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const std::string &back() const
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }
    //提供给StrBlobPtr的接口
    // 定义StrBlobPtr后才能定义这两个函数
    StrBlobPtr begin();
    StrBlobPtr end();

private:
    void check(size_type i, const string &msg) const
    {
        if (i >= data->size())
            throw std::out_of_range(msg);
    }

private:
    std::shared_ptr<vector<string>> data;
};

class StrBlobPtr
{
public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}

    bool operator!=(const StrBlobPtr &p) { return p.curr != curr; }
    string &deref() const
    {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    StrBlobPtr &incr()
    {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }

private:
    std::shared_ptr<vector<string>> check(size_t i, const string &msg) const
    {
        auto ret = wptr.lock();
        if (!ret)
            throw std::runtime_error("unbound StrBlobPtr");
        if (i >= ret->size())
            throw std::out_of_range(msg);
        return ret;
    }
    std::weak_ptr<vector<string>> wptr;
    size_t curr;
};

#endif