#include <bits/stdc++.h>
using namespace std;


int f(int i,int j,int arr[], vector<vector<int>> &dp){

    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int res= INT_MAX;
    for(int k=i;k<j;k++){
        res=min(res , arr[i-1]*arr[k]*arr[j]+  f(i,k,arr,dp)+f(k+1,j,arr,dp));
    }
    return dp[i][j]=res;
}

int MatrixMultiplication(int N,int arr[]){

    vector<vector<int>> dp(N,vector<int>(N,-1));
    return f(1,N-1,arr,dp);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< MatrixMultiplication(n,arr)<<endl;
    return 0;
}
