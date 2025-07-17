// nPr=n!/(n-r)!
// nCr=n!/(r! * (n-r)!)

#include<iostream>
using namespace std;

int fac(int n){
    int i=1, facT=1;
    while(i<=n){
        facT=facT*i;
        i++;
    }
    return facT;
}
int npr(int n, int r){
    int npr;
    npr=(fac(n))/fac(n-r);
    return npr;
}
int ncr(int n, int r){
    int ncr;
     ncr=(fac(n))/(fac(r)*fac(n-r));
     return ncr;
}
int main(){
    int n, r;

    cout<<"Enter n value: ";
    cin>>n;
    cout<<"Enter r value: ";
    cin>>r;

    if(n==0){
        cout<<"error\n";
        return 0;
    }
    else if(n<0){
        cout<<"Enter +ve number\n";
        return 0;
    }
    
    cout<<"result of "<<n<<"P"<<r<<" is: "<<npr(n, r)<<endl;
    cout<<"result of "<<n<<"C"<<r<<" is: "<<ncr(n, r);
 
    return 0;
}