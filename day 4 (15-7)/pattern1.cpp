// 1 2 3 
// 4 5 6
// 7 8 9

// if we want continuous values in next line always take variable outside outer for loop

#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    int num=1;

    cout<<"Enter n value ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}