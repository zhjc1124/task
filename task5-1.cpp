#include <iostream>

using namespace std;
class Student
{
public:
    virtual void get_value( )
    {cin>>num>>name>>sex;}
    void display()
    {cout<<" num: "<<num<<endl;
        cout<<" name: "<<name<<endl;
        cout<<" sex: "<<sex<<endl;}

protected:
//声明基类
//基类公用成员
//基类私有成员
    int num;
    char name;
    char sex;
};
class Student1: public Student
//以 public 方式声明派生类 student1
{
public:
    void display_1()
    {cout<<" age: "<<age<<endl;
        cout<<" address: "<<addr<<endl;}
    virtual void get_value( )
    {cin>>num>>name>>sex>>age>>addr;}
private:
    int age;
    string addr;
};
int main( )
{
    Student1 stud;
//定义派生类 Student1 的对象 stud
    stud.get_value();
    stud.display();
    stud.display_1();
    return 0;
}