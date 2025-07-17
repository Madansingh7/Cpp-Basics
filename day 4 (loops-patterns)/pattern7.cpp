// 1 
// 2 2
// 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;

int main(){
    int i, j, n;

    int num=1;

    cout<<"Enter n: ";
    cin>>n;

    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<num<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}