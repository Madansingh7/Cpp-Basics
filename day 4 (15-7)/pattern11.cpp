// 1 1 1 1 
//   2 2 2
//     3 3
//       4 
#include<iostream>
using namespace std;

int main(){

    int i, j, n;

    cout<<"Enter n value: ";
    cin>>n;

    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout<<"  ";
        }
        for(j=0; j<n-i; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// for(i=0; i<n; i++){
//         for(j=0; j<i; j++){
//             cout<<"  ";
//         }
//         for(j=0; j<n-i; j++){
//             cout<<num<<" ";
//         }
//         num--;
//         cout<<endl;
//     }

// for printing
//4 4 4 4
//  3 3 3
//    2 2
//      1