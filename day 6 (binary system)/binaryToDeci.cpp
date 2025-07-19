#include<iostream>
using namespace std;

int binaryToDeci(int bnum){
    int rem, ans=0, pow=1;
  while(bnum>0){
         rem=bnum%10;
         ans+=(rem*pow);
         bnum/=10;
         pow*=2;
     }
     return ans;
}
int main(){
    int bnum, res;

    cout<<"Enter binary number: ";
    cin>>bnum;

    res=binaryToDeci(bnum);
    cout<<bnum<<" in decimal is "<<res;

    return 0;
}