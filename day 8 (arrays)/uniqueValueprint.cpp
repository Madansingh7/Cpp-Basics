#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array (max 100): ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " values: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nUnique elements are: ";
    for(int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of arr[i]
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]){
                 count++;
            }
        }

        // If occurs only once, it's unique
        if(count == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
