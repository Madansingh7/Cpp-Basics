// Enter last decimal number to print range: 5
// 0  in binary is: 0
// 1  in binary is: 1
// 2  in binary is: 10
// 3  in binary is: 11
// 4  in binary is: 100
// 5  in binary is: 101
#include<iostream>
using namespace std;

int deciToBinary(int num){
    int rem, ans=0, pow=1;
  while(num>0){
         rem=num%2;
         num/=2;
         ans+=(rem*pow);
         pow*=10;
     }
     return ans;
}
int main(){
    int n, res;

    cout<<"Enter last decimal number to print range: ";
    cin>>n;

    for(int i=0; i<=n; i++){
        res=deciToBinary(i);
        cout<<i<<"  in binary is: "<<res<<endl;
    }
}