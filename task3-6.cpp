# include <iostream>
using namespace std;
class Date;
class Time
//对 Date 类提前引用声明
//定义 Time 类
{
public:
    Time(int, int, int);
    friend void display(Date &, Time &);
//display 是成员函数, 形参是 Date 类对象的引用
private:
    int hour;
    int minute;
    int sec;
};
class Date
//定义 Date 类
{
public:
    Date(int, int, int);
    friend void display(Date &, Time &);
//声明 Time 中的 display 为友元成员函数
    private:
    int month;
    int day;
    int year;
};
Time::Time(int h, int m, int s)
//类 Time 的构造函数
{
    hour=h;
    minute=m;
    sec=s;
}
void display(Date &d, Time &t)
//display 作用是输出年、月、日和时、分、秒
{
    cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
    cout<<t.hour<<":" <<t.minute<<":" <<t.sec<<endl;
//引用 Date 类对象中私有数据
//引用本类对象中的私有数据
}
Date::Date (int m, int d, int y)
//类 Date 的构造函数
{
    month=m;
    day=d;
    year=y;
}
int main( )
{
    Time t1(10, 13, 56);
    Date d1(12, 25, 2004);
    display(d1, t1);

//定义 Time 类对象 t1
//定义 Date 类对象 d1
//调用 t1 中的 display 函数, 实参是 Date 类对象 d1
    return 0;
}