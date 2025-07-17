#include<iostream>
using namespace std;

int main(){
    int i, n, res=1;
    
    cout<<"enter a number: ";
    cin>>n;
    if(n==0){
        cout<<"result= 1";
        return 0;
    }
    else if(n<0){
        cout<<"Enter +ve number\n";
        return 0;
    }
    for(i=1; i<=n; i++){
        res = res*i;
        cout<<res<<" ";
    }
    cout<<"\nresult= "<<res;
    return 0;
}