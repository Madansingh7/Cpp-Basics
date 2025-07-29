//optimal solution by two pointer approach (i&j)  
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>arr, int n, int tar){

        vector<int>vec1;
        int i=0, j=n-1;
        while(i<j){
           int psum=arr[i]+arr[j]; //pair sum

           if(psum>tar){
                j--;
           }
           else if(psum<tar){
                i++;
           }
           else{
                vec1.push_back(i);
                vec1.push_back(j);

                return vec1;
           }
        }
        return vec1;//return empty vector
}

int main(){
     int n,tar;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter "<<n<<" elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout<<"Enter target value: ";
    cin>>tar;//target

    vector<int>vec=pairsum(arr,n,tar);

    if(!vec.empty()){
      cout<<"Sum is "<<tar<<" at location "<<vec.at(0)<<" & "<<vec.at(1);  
    }
    else{
        cout<<"no pair"<<endl;
    }
    return 0;
}