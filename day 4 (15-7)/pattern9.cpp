// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include<iostream>
using namespace std;

int main(){
    int i, j, n;

    cout<<"Enter n: ";
    cin>>n;

    for(i=0; i<n; i++){
        int num=1;
        for(j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}