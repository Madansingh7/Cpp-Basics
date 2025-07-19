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
    int num, res;

    cout<<"Enter decimal number: ";
    cin>>num;

    res=deciToBinary(num);
    cout<<num<<" in binary is "<<res;
}