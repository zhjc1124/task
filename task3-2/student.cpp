# include <iostream>
#include "student.h"
using namespace std;
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