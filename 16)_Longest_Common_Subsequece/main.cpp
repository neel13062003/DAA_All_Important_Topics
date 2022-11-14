//Recursion TLE
int fun(string s1,string s2,int n,int m)
{
    if(n == 0 or m == 0)
        return 0;
    if(s1[n-1] == s2[m-1])
        return 1+fun(s1,s2,n-1,m-1);
    else
    {
        int a = fun(s1,s2,n,m-1);
        int b = fun(s1,s2,n-1,m);
        return max(a,b);
    }
}

//memoization TLE
int fun(string s1,string s2,int n,int m,vector<vector<int>>&dp)
{
    if(n == 0 or m == 0)
        return 0;
     if(dp[n][m] != -1)
        return dp[n][m];
    if(s1[n-1] == s2[m-1])
        return 1+fun(s1,s2,n-1,m-1);
    else
    {
        int a = fun(s1,s2,n,m-1);
        int b = fun(s1,s2,n-1,m);
        dp[n][m] = max(a,b);
        return dp[n][m];
    }
}

//Tabulation
int fun_tab(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    for(int i = 0; i<= n;i++)
    {
        for(int j = 0; j <= m; j++)
        {
             // dp[i][j] = 0;
              if(i == 0 or j == 0) dp[i][j] = 0;
        }
    }

    for(int i = 1; i<= n;i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}

int longestCommonSubsequence(string text1, string text2) {
    int n = text1.size();
    int m = text2.size();

    //recursion
    // return fun(text1,text2,n,m);

    //memoization
    // vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    // return fun(text1,text2,n,m,dp);

	//Tabulation
    return fun_tab(text1,text2,n,m);

}
