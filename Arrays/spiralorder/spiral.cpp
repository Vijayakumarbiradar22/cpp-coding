#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>r>>c;
    int mat[r][c];

    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }

    
}