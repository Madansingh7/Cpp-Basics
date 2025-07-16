// * * * * 
// * * *
// * *
// *
#include<iostream>
using namespace std;

int main(){
    int i, j, n;

    cout<<"Enter n value ";
    cin>>n;

    for(i=0; i<n; i++){
        for(j=n; j>=i+1; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}