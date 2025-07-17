//check number prime or not
#include<iostream>
using namespace std;

int main(){
    int i, n, flag=0;
    cout<<"\nEnter a number: ";
    cin>>n;
    for(i=2; i <= n-1; i++){         //root n tak check karna hota hai which is better aproach
        if(n % i == 0){
            flag=1;
            break;
        }   
    }
    if(flag==0){
        cout<<"isprime";
    }
    else{
        cout<<"notprime";
    }
    return 0;
    
}