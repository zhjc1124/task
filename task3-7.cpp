# include <iostream>
using namespace std;
//类模板外定义各成员函数需要使用模板函数
template <class numtype>
class Compare
//定义类模板
{
public:
    Compare(numtype a, numtype b)
    {x=a; y=b;}
    numtype max( );
    numtype min();

private:
    numtype x, y;
};

template <class numtype>
numtype Compare <numtype> :: max( )
{return (x>y)?x:y;}

template <class numtype>
numtype Compare <numtype> :: min( )
{return (x<y)?x:y;}

int main( )
{
    Compare <int> cmp1(3,7);
//定义对象 cmp1, 用于两个整数比较
    cout<<cmp1.max()<<" is the Maximum of two integer numbers."<<endl;
    cout<<cmp1.min()<<" is the Minimum of two integer numbers."<<endl<<endl;
    Compare <float> cmp2(45.78,93.6);
//定义对象 cmp2, 用于两浮点数比较
    cout<<cmp2.max()<<" is the Maximum of two float numbers."<<endl;
    cout<<cmp2.min()<<" is the Minimum of two float numbers."<<endl<<endl;
    Compare <char> cmp3('a', 'A');
//定义对象 cmp3, 用于两个字符比较
    cout<<cmp3.max()<<" is the Maximum of two characters."<<endl;
    cout<<cmp3.min()<<" is the Minimum of two characters."<<endl;
    return 0;
}