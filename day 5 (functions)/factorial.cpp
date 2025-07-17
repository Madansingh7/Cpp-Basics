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
int main(){
    int n, res;

    cout<<"Enter n value: ";
    cin>>n;

    if(n==0){
        cout<<"factorial of 0 is: 1\n";
        return 0;
    }
    else if(n<0){
        cout<<"Enter +ve number\n";
        return 0;
    }

    res=fac(n);
    cout<<"factorial of "<<n<<" is: "<<res;
 
    return 0;
}