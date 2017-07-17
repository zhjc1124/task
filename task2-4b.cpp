#include <iostream>
using namespace std;
//使用变量的引用对3个变量按由小到大顺序排序
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"before: a="<<a<<" b="<<b<<" c="<<c<<endl;
    int tmp;
    if(a>b){
         tmp = a;
         a = b;
         b = tmp;
    }
    if(b>c){
         tmp = b;
         b = c;
         c = tmp;
    }
    if(a>b){
         tmp = a;
         a = b;
         b = tmp;
    }
    cout<<"after : a="<<a<<" b="<<b<<" c="<<c<<endl;
}


