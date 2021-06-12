#include<iostream>
#include<stack>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int fib(int n, vector<int> dp){
    if(n==1||n==0)
    return 1;
    if(dp[n]!=-1)
    return dp[n];
    int ans;
    ans=fib(n-1,dp)+fib(n-2,dp);
    dp[n]=ans;
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fib(n,dp);//if we input 5 then it gives output 8 as it is starting from 0
    
}