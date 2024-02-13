#include<iostream>
using namespace std;

int linearsearch(int array[],int n,int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the search element:";
    cin>>key;
    cout<<linearsearch(array,n,key)<<endl;

}