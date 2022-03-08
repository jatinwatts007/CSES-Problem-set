#include <bits/stdc++.h>
 
using namespace std;
int ans = INT_MAX-1;
 
int helper(vector<int>&value,int sum,int *dp){
    if(sum<0) return INT_MAX-1;
    if(sum==0){
        return 0;
    }
    if(dp[sum]!=INT_MAX-1) return dp[sum];
    int min1 = INT_MAX-1;
   // min1 = min(min1,1+helper(value,sum-value[j],j,dp));
    for(int i=0;i<value.size();i++){
        min1 = min(min1,1+helper(value,sum-value[i],dp));
    }
    dp[sum]=min1;
    return min1;
}
int main()
{
   int n,target;
   cin>>n>>target;
    int * dp = new int [target+1];
    for(int i=0;i<=target;i++)dp[i]=INT_MAX-1;
   vector<int> value;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       value.push_back(x);
   }
   ans = helper(value,target,dp);
   //for(int i=0;i<=target;i++) cout<<dp[i]<<" ";
   if(ans==INT_MAX-1) ans=-1;
   cout<<ans<<" ";
   
   
   return 0;
}
