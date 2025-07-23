//using vector 
#include<iostream>
#include<vector>
using namespace std;

 void reverse(vector<int> &arr, int n){
    int srt=0, end=n-1;
    while(srt<=end){
       swap(arr.at(srt),arr.at(end));
       srt++;
       end--;
    } 
}
int main(){
    int n;

    cout<<"Enter n value: ";
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter "<<n<<" values: ";
    for(int i=0; i<n; i++){
        cin>> arr.at(i) ;// or we can use arr[i] but not arr+i
    }

    reverse(arr,n);
    
    cout<<"After reverse: ";
    for(int i=0; i<n; i++){
        cout<< arr.at(i) <<" ";
    }

    return 0;
}