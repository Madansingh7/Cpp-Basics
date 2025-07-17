// 1 
// 2 3
// 4 5 6
// 7 8 9 10
//FLOYD'S TRIANGLE
#include<iostream>
using namespace std;

int main(){

    int i, j, n, num=1;

    cout<<"Enter n value: ";
    cin>>n;

    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}