# include <iostream>
using namespace std;
class Complex
{ public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i){real=r;imag=i;}
    Complex operator+(Complex &);            //声明重载运算符的函数
    Complex operator+(int &);
    friend Complex operator+(int &, Complex &);
    void display( );
private:
    double real;
    double imag;
};
Complex Complex::operator+(Complex &c2)
{
    Complex c;
    c.real=real+c2.real;
    c.imag=imag+c2.imag;
    return c;
}
Complex Complex::operator+(int &i)
{
    Complex c;
    c.real=real+i;
    c.imag=imag;
    return c;
}
Complex operator+(int &i, Complex &c2)
{
    Complex c;
    c.real=c2.real+i;
    c.imag=c2.imag;
    return c;
}

void Complex::display( )
{
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main( )
{
    Complex c1(3,4),c2(5,-10);
    int i = 10;
    cout<<"c1="; c1.display( );
    cout<<"c2="; c2.display( );
    cout<<"i="<<i;
    cout<<"c1+c2="; (c1+c2).display( );
    cout<<"c1+i="; (c1+i).display( );
    cout<<"i+c1="; (i+c1).display( );
    return 0;
}