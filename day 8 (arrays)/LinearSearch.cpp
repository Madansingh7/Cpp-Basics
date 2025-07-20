//LINEAR SEARCH
#include<iostream>
using namespace std;

int linearsearch(int *arr, int n, int tar){
    for(int i=0; i<n; i++){
        if(tar==*(arr+i)){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, tar, res;

    cout<<"Enter n value: ";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" values: ";
    for(int i=0; i<n; i++){
        cin>> *(arr+i);
    }
     cout<<"Enter target value: ";
    cin>>tar;//target

    res=linearsearch(arr, n, tar);

    if(res!=-1){
        cout<<"Target value found at index "<<res<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
    return 0;
}