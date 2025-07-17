// A 
// B C
// D E F
// G H I J
#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    char ch='A';
    cout<<"Enter n value: ";
    cin>>n;

    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}