//using two pointer approach
#include<iostream>
using namespace std;

 void reverse(int *arr, int n){
    int srt=0, end=n-1;
    while(srt<=end){
       swap(*(arr+srt),*(arr+end));
       srt++;
       end--;
    } 
}
int main(){
    int n;

    cout<<"Enter n value: ";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" values: ";
    for(int i=0; i<n; i++){
        cin>> *(arr+i);
    }

    reverse(arr,n);
    
    cout<<"After reverse: ";
    for(int i=0; i<n; i++){
        cout<< *(arr+i)<<" ";
    }

    return 0;
}
        // logic for swap without swap() and temp variable
        // a = a + b;
        // b = a - b;
        // a = a - b;