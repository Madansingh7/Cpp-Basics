#include<iostream>
using namespace std;

int sum(int n){
    int i=1, sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    return sum;
}
int main(){
    int n, res;

    cout<<"Enter n value: ";
    cin>>n;

    res=sum(n);
    cout<<"Sum from 1 to "<<n<<" is: "<<res;
 
    return 0;
}