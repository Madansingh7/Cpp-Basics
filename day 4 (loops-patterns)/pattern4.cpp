// A B C D 
// E F G H
// I J K L
// M N O P
#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    char ch='A';

    cout<<"Enter n value ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}