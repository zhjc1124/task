#include <iostream>
using namespace std;
//使用变量的引用对3个变量按由小到大顺序排序
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"before: a="<<a<<" b="<<b<<" c="<<c<<endl;
    int tmp;
    if(a>b)
        swap(a, b);
    if(b>c)
        swap(b, c);
    if(a>b)
        swap(a, b);
    cout<<"after : a="<<a<<" b="<<b<<" c="<<c<<endl;
}


