#include <iostream>
using namespace std;
//用重载函数实现 同一个函数名对 n 个数据进行从小到大排序,数据类型可以是整型、单精度型、双精度型。
void sort(int arr[], int n) {
    cout<<"before: ";
    for(int i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++)
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
    }

    cout<<"after : ";
    for(int i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void sort(float arr[], int n) {
    cout<<"before: ";
    for(int i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++)
            if (arr[j] > arr[j+1]) {
                float tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
    }

    cout<<"after : ";
    for(int i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void sort(double arr[], int n) {
    cout<<"before: ";
    for(int i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++)
            if (arr[j] > arr[j+1]) {
                double tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
    }

    cout<<"after : ";
    for(int i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int n;
    cout<<"input the number of data: ";
    cin>>n;
    int arr1[n];
    float arr2[n];
    double arr3[n];

    //int
    cout<<"input 'int' data: "<<endl;
    for(int i = 0; i < n ; i++)
        cin>>arr1[i];
    sort(arr1, n);


    //float
    cout<<"input 'float' data: "<<endl;
    for(int i = 0; i < n ; i++)
        cin>>arr2[i];
    sort(arr2, n);


    //double
    cout<<"input 'double' data: "<<endl;
    for(int i = 0; i < n ; i++)
        cin>>arr3[i];
    sort(arr3, n);

}