#include<iostream>
using namespace std;

int main(){
    int i=1, n;
    cout<<"\nEnter last number: ";
    cin>>n;
    while(i<=n){
        if(i % 2 != 0){
        cout<<i<<" ";
        }
        i++;
    }
    return 0;
}