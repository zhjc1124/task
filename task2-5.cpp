#include <iostream>
#include <string>
using namespace std;
int main(){
    string seq[5];
    cin>>seq[0]>>seq[1]>>seq[2]>>seq[3]>>seq[4];
    cout<<"before: ";
    for(int i=0;i<5;i++)
        cout<<seq[i]<<" ";
    for(int i=3;i>=0;i--)
        for(int j=0;j<i;j++)
            if(seq[j]>seq[j+1]){
                string tmp = seq[j];
                seq[j] = seq[j+1];
                seq[j+1] = seq[j];
            }
    cout<<"after : ";
    for(int i=0;i<5;i++)
        cout<<seq[i]<<" ";

}
