// 1 
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;

int main(){
    int i, j, n,num;

    cout<<"Enter n: ";
    cin>>n;

    for(i=0; i<n; i++){
        num=i+1;
        for(j=0; j<i+1; j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    return 0;
}