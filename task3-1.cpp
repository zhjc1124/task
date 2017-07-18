#include <iostream>
using namespace std;
class Time
//定义 Time 类
{
public:
    void set_time(){
        cin>>hour>>minute>>sec;
    }

    void print_time(){
        cout<<hour<<":"<<minute<<":"<<sec<<endl;
    }
private:
    int hour;
    int minute;
    int sec;
};
int main( )
{
    Time t1;
    t1.set_time();
    t1.print_time();
    return 0;
}