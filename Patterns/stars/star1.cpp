#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the no.of rows:"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}