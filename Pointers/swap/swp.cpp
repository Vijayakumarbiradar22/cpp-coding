#include<iostream>
using namespace std;

//call by reference

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=20;
    int b=40;

    // int *aptr=&a;
    // int *bptr=&b;

    swap(&a,&b);
    cout<<a<<" "<<b<<" "<<endl;
}