//为了方便把三个文件的内容放在一个文件里了
# include <iostream>
using namespace std;
//student.h
class Student
        {
                public:
                void display();
                void set_value();
//公用成员函数原型声明
                private:
                int num;
                char name[20];
                char sex;
        };


//student.cpp
void Student::display( )
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
}
void Student::set_value() {
    cout<<"input num: ";
    cin>>num;
    cout<<"input name: ";
    cin>>name;
    cout<<"input sex: ";
    cin>>sex;
}

//main.cpp

int main( )
{
    Student stud;
    stud.set_value();
    stud.display();
//将类声明头文件包含进来
//定义对象
//执行 stud 对象的 display 函数
    return 0;
}