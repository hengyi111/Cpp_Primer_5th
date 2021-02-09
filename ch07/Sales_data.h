#ifndef SALES_DATA_H_INCLUDED
#define SALES_DATA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

// 提示string不明确，需要再加上std::
class Sales_data
{
    friend istream &operator>>(istream &, Sales_data &);
    friend ostream &operator<<(ostream &, const Sales_data &);
    friend bool operator<(const Sales_data &, const Sales_data &);
    friend bool operator==(const Sales_data &, const Sales_data &);
    // ex7_6 start
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend istream &read(istream &, Sales_data &);
    friend ostream &print(ostream &, const Sales_data &);
    // ex7_6 end

public:
    // construct function
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(istream &is) { is >> *this; }
    // ex7_11 start
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep);

    // ex7_11 end

    Sales_data &operator+=(const Sales_data &);
    std::string isbn() const
    {
        return bookNo;
    }

    // ex7_2 start  add combine
    Sales_data &combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold);
        if (sellingprice != 0)
        {
            discount = saleprice / sellingprice;
        }
        return *this;
    }
    // ex7_2 end

private:
    std::string bookNo;             //书籍编号
    unsigned units_sold = 0;   //销量
    double sellingprice = 0.0; //原始价格
    double saleprice = 0.0;    //实际价格
    double discount = 0.0;     //折扣
};

// ex7_11 start
Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep)
{
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if(sellingprice!=0)
    {
        discount = saleprice / sellingprice;
    }
}
//ex7_11 end

inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn();
}

Sales_data operator+(const Sales_data &, const Sales_data &);

inline bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.units_sold == rhs.units_sold &&
           lhs.sellingprice == rhs.sellingprice &&
           lhs.saleprice == rhs.saleprice &&
           lhs.isbn() == rhs.isbn();
}

inline bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs); // 基于运算法==给出！=的定义
}

Sales_data &Sales_data::operator+=(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
    if (sellingprice != 0)
    {
        discount = saleprice / sellingprice;
    }
    return *this;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data ret(lhs); //把lhs的内容拷贝到临时变量ret中，这种做法便于计算
    ret += rhs;
    return ret;
}

istream &operator>>(istream &in, Sales_data &s)
{
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if (in && s.sellingprice != 0)
    {
        s.discount = s.saleprice / s.sellingprice;
    }
    else
    {
        s = Sales_data();
    }
    return in;
}

ostream &operator<<(ostream &out, const Sales_data &s)
{
    out << s.isbn() << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount;
    return out;
}

// ex7_6 start
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
istream &read(istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    if (is && item.sellingprice != 0)
    {
        item.discount = item.saleprice / item.sellingprice;
    }
    else
    {
        item = Sales_data();
    }
    return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}
// ex7_6 end

#endif