//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.

    int func(int i,int w,int wt[],int val[],vector<vector<int>>&dp){
        if(i<0)return 0;

        if(dp[i][w]!=-1)return dp[i][w];

        int a=0,b=0;
        if(wt[i]<=w){
            a=val[i]+func(i-1,w-wt[i],wt,val,dp);
        }

        b= func(i-1,w,wt,val,dp);

        return dp[i][w] = max(a,b);
    }

    int knapSack(int W, int wt[], int val[], int n)
    {
        vector<vector<int>>dp(n+1,vector<int>(W+1,0));

        for(int i=1;i<=n;i++){

            for(int j=1;j<=W;j++){

                int a=0,b=0;
                if(wt[i-1]<=j){
                    a=val[i-1]+dp[i-1][j-wt[i-1]];
                }

                b= dp[i-1][j];

                dp[i][j] = max(a,b);

            }

        }

       return dp[n][W];
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;

        int val[n];
        int wt[n];

        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];

        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;

    }
	return 0;
}
// } Driver Code Ends




#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

// A utility function that returns maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    // Base Case
    if (n == 0 || W == 0)
        return 0;

    // If weight of the nth item is more than Knapsack capacity W, then
    // this item cannot be included in the optimal solution
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    // Return the maximum of two cases: (1) nth item included (2) not included
    else
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
                knapSack(W, wt, val, n - 1));
}

// Driver program to test above function
int main()
{
    cout << "Enter the number of items in a Knapsack:";
    int n, W;
    cin >> n;
    int val[n], wt[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value and weight for item " << i << ":";
        cin >> val[i];
        cin >> wt[i];
    }

    //    int val[] = { 60, 100, 120 };
    //    int wt[] = { 10, 20, 30 };
    //    int W = 50;
    cout << "Enter the capacity of knapsack";
    cin >> W;
    cout << knapSack(W, wt, val, n);

    return 0;
