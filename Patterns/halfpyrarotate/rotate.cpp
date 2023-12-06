#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no.of rows:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        // for(int s=1;s<=rows-i;s++){
        //     cout<<" ";
        // }
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            } else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}