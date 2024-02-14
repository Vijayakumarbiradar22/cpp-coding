#include<iostream>
using namespace std;

int main(){
    int a=10;
    int  *aptr;
    aptr=&a;
    cout<<aptr<<endl; //address of a
    cout<<*aptr<<endl;
}