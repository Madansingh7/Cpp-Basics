//input 123 
// output 1+2+3 = 6

#include<iostream>
using namespace std;

int Dsum(int n){
    int i, digit, sum=0;
    //core logic
    while(n>0){       
        digit= n % 10;
        sum+=digit;
        n = n/10;
    }
    return sum;
}
int main(){
    int n, res;

    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){
        cout<<"Enter +ve number\n";
        return 0;
    }

    res=Dsum(n);
    cout<<"sum of each digit of "<<n<<" is: "<<res;
 
    return 0;
}