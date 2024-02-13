#include<iostream>
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

    int mx=INT_MIN;

    for(int i=0;i<n;i++){
        mx=max(mx,array[i]);
        cout<<mx<<" ";
    }
    cout<<endl;
    cout<<"Maximum of the array is: "<<mx<<endl;
    return 0;
}