#include <bits/stdc++.h>
using namespace std;


void PrintMat(int mat[][10],int n){
    int i,j;
    cout<<"\n\n"<<setw(4)<<" ";
    for(int i=0;i<n;i++){
        cout<<setw(3)<<"(" << i+1 << ")";
    }
    cout<<"\n\n";
    //print 1 if corresponding matrix is connected otherwise 0

    for(int i=0;i<n;i++){
        cout<<setw(3)<<"(" << i+1 << ")" ;
        for(int j=0;j<n;j++){
            cout<<setw(4)<<mat[i][j];
        }
         cout<<"\n\n";
    }
}


int main(){

    int v;
    cout<<"Enter number of vertices";
    cin>>v;
    int mat[10][10];
    cout<<"\n";
    //Take input of adjency of each pair of vertexes
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(i!=j){
                cout<<"Enter 1 if vertex"<<i+1<<"is adjecent to" <<j+1 << ", 0 otherwise";
                cin>>mat[i][j];
                mat[i][j]=mat[i][j];
            }else{
                mat[i][j]=0;
            }
        }
    }
    PrintMat(mat,v);
    return 0;
}
