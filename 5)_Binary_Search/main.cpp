#include <bits/stdc++.h>
using namespace std;

int findBinarySearch(vector<int>&vec,int target){
    int n=vec.size();
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(vec[mid]==target){
            return mid;
        }else if(vec[mid]<target){
            start=mid+1;
        }else if(vec[mid]>target){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return start;
}


int main(){
    int n,p,x;
    cin>>n>>p;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }

    int ans=findBinarySearch(vec,p);
    cout<<ans<<endl;

    return 0;
}
