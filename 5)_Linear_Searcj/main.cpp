#include <bits/stdc++.h>
using namespace std;

int find(vector<int>&vec,int p){
    int x;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==p){
            x=i+1;
        }
    }
    return x;
}


int main(){
    int n,p,x;
    cin>>n>>p;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }

    cout<<find(vec,p);

    return 0;
}
