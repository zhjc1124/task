#include <iostream>
using namespace std;
//指针方法对 3 个变量按由小到大顺序排序
int main(){
    int *a, *b ,*c, *p;
    cin>>*a>>*b>>*c;
    cout<<"before: a="<<*a<<" b="<<*b<<" c="<<*c<<endl;
    if(*a>*b){
        p = a;
        a = b;
        b = p;
    }
    if(*b>*c){
        p = b;
        b = c;
        c = p;
    }
    if(*a>*b){
        p = a;
        a = b;
        b = p;
    }
    cout<<"after : a="<<*a<<" b="<<*b<<" c="<<*c<<endl;
}
