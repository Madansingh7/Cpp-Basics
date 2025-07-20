//without inbuilt functions
#include<iostream>
using namespace std;

int main(){
    int n,smallest, largest;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" values: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    smallest=largest=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    
    cout<<"Smallest value is: "<<smallest<<" & Largest value is: "<<largest<<endl;
    return 0;
}