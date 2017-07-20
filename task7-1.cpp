#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"input a b c: "<<endl;
    float a, b, c, s, area;
    cin>>a>>b>>c;
    if(a+b>c and a+c>b and b+c>a)
    {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"area: "<<area<<endl;
    }
    else
        cerr<<"error!"<<endl;

    return 0;
}