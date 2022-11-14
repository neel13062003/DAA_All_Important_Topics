// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int fib(int n){
    //Iterative apprach = O(n) = Time Complexity
    int first=0,second=1,sum=0;
    for(int i=0;i<n;i++){
        sum=first+second;
        first=second;
        second=sum;
    }
    return sum;
}

int fib2(int n){
    //recursive approach = O(2^n) = Time Complexity
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cin>>n;
    //cout<<fib(n)<<endl;
    cout<<fib2(n)<<endl;
    return 0;
}
