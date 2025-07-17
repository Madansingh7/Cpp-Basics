#include<iostream>
using namespace std;

int isprime(int n){
    int i, flag=1;
     for(i=2; i*i <= n; i++){     
        if(n % i == 0){
            flag=0;
            break;
        }   
    }
    return flag;
}
int main(){
    int n, res;

    cout<<"Enter n value: ";
    cin>>n;

    res=isprime(n);

    if(res==1){
        cout<<n<<" is Prime\n";
    }
    else{
        cout<<"not Prime\n";
    }
    return 0;
}