#include<iostream>
using namespace std;

int main(){

    //
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl; //prints a value i.e 10
    cout<<aptr<<endl; //address of a
    aptr++;
    cout<<aptr<<endl; //next address
    
    //Pointer and Array
    int arr[]={10,20,30};
    cout<<*arr<<endl;  //prints 1st element of array

    int *ptr=arr;
    for(int i=0;i<3;i++){  //prints all the array elements
        cout<<*ptr<<endl;
        ptr++;
    }

    //Pointer ti pointer
    int b=90;
    int *p;
    p=&b;
    cout<<*p<<endl;
    int **q=&p;
    cout<<*q<<endl;

}