#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
using namespace std;
struct Sales_data{
    //构造函数
    Sales_data()=default;
    Sales_data(const string &s):bookNo(s){}
    Sales_data(const string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p*n){ }
    Sales_data(istream &);
    //对象操作
    std::string isbn() const{
        return bookNo;
    }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;


    //数据成员
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;


};
Sales_data::Sales_data(istream &){
    read(cin, s);
}

Sales_data &add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream& os, const Sales_data& item){
    os << item.bookNo << " " << item.units_sold << " " << item.revenue << " "
       << item.avg_price() <<endl;
    return os;
}

std::istream& read(std::istream& is, Sales_data& item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

double Sales_data::avg_price() const{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}
Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}





















#endif // SALES_DATA_H
