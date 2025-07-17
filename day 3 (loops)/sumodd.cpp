#include<iostream>
using namespace std;

int main(){
    int i=1, n, sum=0;
    cout<<"\nEnter last number: ";
    cin>>n;
    while(i<=n){
        if(i % 2 != 0){
        sum += i;
        }
        i++;
    }
    cout<<"Sum of first "<<n<<" odd number is "<<sum;
    return 0;
}