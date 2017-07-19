#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:
    void display();
    virtual void set_value();
protected:
    string name;
    int age;
    char sex;
    string addr;
    string phone;
    string title;
};
void Teacher::display() {
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"sex: "<<sex<<endl;
    cout<<"addr: "<<addr<<endl;
    cout<<"phone: "<<phone<<endl;
    cout<<"title: "<<title<<endl;
}
void Teacher::set_value() {
    cout<<"input data: ";
    cin>>name>>age>>sex>>addr>>phone>>title;
}
class Cadre{
public:
    virtual void set_value();
protected:
    string name;
    int age;
    char sex;
    string addr;
    string phone;
    string post;
};
void Cadre::set_value() {
    cout<<"input data: ";
    cin>>name>>age>>sex>>addr>>phone>>post;
}
class Teacher_Cadre: protected Teacher, protected Cadre{
public:
    void show();
    void set_value();
private:
    int wages;
};
void Teacher_Cadre::set_value() {
    cout<<"input data: ";
    cin>>Teacher::name>>Teacher::age>>Teacher::sex>>Teacher::addr>>Teacher::phone>>Teacher::title>>Cadre::post>>wages;
}
void Teacher_Cadre::show() {
    display();
    cout<<"post :"<<Cadre::post<<endl;
    cout<<"wages: "<<wages<<endl;
}

int main(){
    Teacher_Cadre tc;
    tc.set_value();
    tc.show();
    return 0;
}