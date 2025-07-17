#include<iostream>
using namespace std;

int main(){
    
    int n=4, i, j;
    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
            cout<<"*";
        }
        for(j=0; j<2*(n-i); j++){
            cout<<" ";
        }
        for(j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}