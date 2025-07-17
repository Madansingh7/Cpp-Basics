#include<iostream>
using namespace std;

int main(){
    int i, n, sum=0;

    cout<<"Enter N value: ";
    cin>>n;

    for(i=1; i<=n; i++){
        if(i % 3 == 0){
            sum+=i;
        }
    }
    cout<<"Sum of all numbers which are multiple of 3 is: \n";
    cout<<sum;

    return 0;
}