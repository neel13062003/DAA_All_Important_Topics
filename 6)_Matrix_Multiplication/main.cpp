#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr1[100][100],arr2[100][100],arr3[100][100],x;
    //row=2 ,col=2
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>x;
            arr1[i][j]=x;
        }
    }
    cout<<":"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>x;
            arr2[i][j]=x;
        }
    }
     cout<<":"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                arr3[i][j]=arr1[i][k]*arr2[k][j];
            }
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
