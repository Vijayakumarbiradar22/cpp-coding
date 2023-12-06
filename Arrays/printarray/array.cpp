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

    cout<<"The array elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<array[3]<<" is at position 3";
}