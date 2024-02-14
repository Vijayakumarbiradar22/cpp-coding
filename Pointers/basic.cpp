#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl; //prints a value i.e 10
    cout<<aptr<<endl; //address of a
    aptr++;
    cout<<aptr<<endl; //next address
    
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }



}