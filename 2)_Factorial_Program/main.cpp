// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


//O(n) Time complexity
int fac(int n){
    //Iterative apprach
    int fact=1;
    for(int i=1;i<=n;i++){
       fact=fact*i;
    }
    return fact;
}

int fac2(int n){
    //recursive approach
    if(n==0 || n==1){
        return n;
    }
    return n*fac2(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<fac(n)<<endl;
    //cout<<fac2(n)<<endl;
    return 0;
}
