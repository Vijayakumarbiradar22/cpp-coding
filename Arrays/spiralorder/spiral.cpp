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

    cout<<"Spiral order is:"<<endl;

    int rowstart=0;
    int rowend=r-1;
    int colstart=0;
    int colend=c-1;

    while(rowstart<=rowend && colstart<=colend){

        for(int col=colstart;col<=colend;col++){
            cout<<mat[rowstart][col]<<" ";
        }
        rowstart++;

        for(int row=rowstart;row<=rowend;row++){
            cout<<mat[row][colend]<<" ";
        }
        colend--;

        for(int col=colend;col>=colstart;col--){
            cout<<mat[rowend][col]<<" ";
        }
        rowend--;

        for(int row=rowend;row>=rowstart;row--){
            cout<<mat[row][colstart]<<" ";
        }
        colstart++;
    }
}