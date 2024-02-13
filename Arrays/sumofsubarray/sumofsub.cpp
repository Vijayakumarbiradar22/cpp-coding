#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int curr=0;

    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=array[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}