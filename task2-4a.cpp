#include <iostream>
using namespace std;
//指针方法对 3 个变量按由小到大顺序排序
void swap(int *a, int *b){
    int *p;
    p = a;
    a = b;
    b = p;
}
int main(){
    int a, b ,c;
    cin>>a>>b>>c;
    cout<<"before: a="<<a<<" b="<<b<<" c="<<c<<endl;
    if(a>b)
         swap(&a, &b);
    if(b>c)
         swap(&b, &c);
    if(a>b)
         swap(&a, &b);
    cout<<"after : a="<<a<<" b="<<b<<" c="<<c<<endl;
}
