#include <iostream>
using namespace std;
//指针方法对 3 个变量按由小到大顺序排序
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort(int arr[], int n){


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
        swap(&a, &c);
    cout<<"after : a="<<a<<" b="<<b<<" c="<<c<<endl;
}
