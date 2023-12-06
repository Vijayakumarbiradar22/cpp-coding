#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++){
        if(array[i]>maxNo){
            maxNo=array[i];
        }
        if(array[i]<minNo){
            minNo=array[i];
        }
    }
    // cout<<"Max is "<<maxNo<<endl;
    // cout<<"Min is "<<minNo<<endl;
}