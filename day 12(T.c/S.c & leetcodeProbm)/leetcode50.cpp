//T.C=>O(logn)  S.C=>O(1)
// HANDLES ONLY +VE POWER
#include<iostream>
using namespace std;

int fun(int x, int n){
    int res=1;
     while(n>0){
        if(n%2==1){
            res*=x;
        }
        x*=x;
        n/=2;
    }
    return res;
}
int main(){
    int x, n, res;

    cout<<"Enter X power N value \n";
    cout<<"X: ";
    cin>>x;
    cout<<endl;
    cout<<"N: ";
    cin>>n;

    res=fun(x,n);

    cout<<"result= "<<res<<endl;

    return 0;
}