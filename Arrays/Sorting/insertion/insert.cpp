#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter the elemetnts of aray:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=1;i<n;i++){
        int current=array[i];
        int j=i-1;
        
    }
}