// 1 
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;

int main(){
    int i, j, n;

    cout<<"Enter n: ";
    cin>>n;

    for(i=0; i<n; i++){
        for(j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}