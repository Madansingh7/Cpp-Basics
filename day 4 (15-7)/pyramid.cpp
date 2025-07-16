//    1
//   121
//  12321
// 1234321
#include<iostream>
using namespace std;

int main(){

    int i, j, k, l, n;

    cout<<"Enter n value: ";
    cin>>n;

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(k=0; k<i+1; k++){
            cout<<k+1;
        }
        for(l=i; l>0; l--){
                cout<<l;
        }
        cout<<endl;
    }
    return 0;
}