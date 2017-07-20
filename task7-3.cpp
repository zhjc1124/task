#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    int num[20];
    cout<<"input numbers: "<<endl;
    for(int i=0; i<20; i++)
        cin>>num[i];
    ofstream fw1, fw2;
    fw1.open("f1.dat");
    fw2.open("f2.dat");
    cout<<"\nwrite f1: "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<num[i]<<" ";
        fw1<<num[i]<<" ";
    }
    cout<<"\nwrite f2: "<<endl;
    for(int i=10; i<20; i++)
    {
        cout<<num[i]<<" ";
        fw2<<num[i]<<" ";
    }
    cout<<endl;
    fw1.close();

    ifstream fr1;
    fr1.open("f1.dat");
    int file1[10];
    cout<<"\nread f1: "<<endl;
    for(int i=0; i<10; i++)
    {
        fr1>>file1[i];
        cout<<file1[i]<<" ";
    }
    cout<<"\nwrite f2: "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<file1[i]<<" ";
        fw2<<file1[i]<<" ";
    }
    fr1.close();
    fw2.close();
    cout<<endl;

    ifstream fr2;
    fr2.open("f2.dat");
    int file2[20];
    cout<<"\nread f2: "<<endl;
    for(int i=0; i<20; i++)
    {
        fr2>>file2[i];
        cout<<file2[i]<<" ";
    }
    fr2.close();
    sort(file2, file2+20);
    fw2.open("f2.dat");
    cout<<"\nwrite f2: "<<endl;
    for(int i=0; i<20; i++)
    {
        cout<<file2[i]<<" ";
        fw2<<file2[i]<<" ";
    }
    cout<<endl;
    fw2.close();

    return 0;
}