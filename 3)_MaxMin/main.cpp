// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> maxmin(vector<int>&arr,int n){
    pair<int,int> p;
    int maxF=0;
    int minF=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxF){
            maxF=arr[i];
        }
        else if(arr[i]<minF){
            minF=arr[i];
        }
    }
    p.first=maxF;
    p.second=minF;
    return {p.first,p.second};
}

int main() {
    int n,x;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    cout<<maxmin(vec,n)<<endl;
    return 0;
}
