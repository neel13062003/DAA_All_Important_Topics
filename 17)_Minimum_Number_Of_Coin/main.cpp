//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++




class Solution{
public:
    vector<int> minPartition(int N){
        vector<int>ans ;
        int count = 0 ;
        while( N >= 2000 ){
            N -= 2000 ;
            count++ ;
            ans.push_back(2000) ;
        }
        while( N >= 500 ){
            N -= 500 ;
            count++ ;
             ans.push_back(500);
        }
        while( N >= 200 ){
            N -= 200 ;
            count++ ;
             ans.push_back(200) ;
        }
        while( N >= 100 ){
            N -= 100 ;
            count++ ;
             ans.push_back(100) ;
        }
        while( N >= 50 ){
            N -= 50 ;
            count++ ;
            ans.push_back(50) ;
        }
        while( N >= 20 ){
            N -= 20 ;
            count++ ;
            ans.push_back(20);
        }
        while( N >= 10 ){
            N -= 10 ;
            count++ ;
             ans.push_back(10) ;
        }
        while( N >= 5 ){
            N -= 5 ;
            count++ ;
             ans.push_back(5) ;
        }
        while( N >= 2  ){
            N -= 2 ;
            count++ ;
             ans.push_back(2) ;
        }
        while( N >= 1 ){
            N -= 1 ;
            count++ ;
            ans.push_back(1) ;
        }
        // Using count you can will know the minimum numer of coins required
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;

        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
