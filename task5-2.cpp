#include <iostream>
#include <string>
using namespace std;
class Student
//声明基类
{
//基类公用成员
public:
    void display();
protected:
//基类保护成员
    int num;
    char name;
    char sex;
};
void Student::display()
//定义基类成员函数
{cout<<"num: "<<num<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"sex: "<<sex<<endl;}
class Student1: protected Student
//用 protected 方式声明派生类 student1
{
public:
    void display1();
    void get_value( )
    {cin>>num>>name>>sex>>age>>addr;}
private:
    int age;
    string addr;
};
void Student1::display1()
//定义派生类公用成员函数
{cout<<"num: "<<num<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"sex: "<<sex<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"address: "<<addr<<endl;}
int main( )
{
    Student1 stud1;
//定义派生类 Student1 的对象 stud1
    stud1.get_value();
    stud1.display1();
    return 0;
}