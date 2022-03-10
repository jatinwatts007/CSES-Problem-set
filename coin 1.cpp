#include<bits/stdc++.h>
using namespace std;
bool helper(vector<int>&v,int sum,vector<int>&dp){
    if(sum<0) return false;
    if(sum==0){
        dp[0]=1;
        return true;
    }
    if(dp[sum]!=0) return true;
    int ans=0;
    for(int i=0;i<v.size();i++){
        bool check = false;
        check = helper(v,sum-v[i],dp);
        if(check==true)
        { 
            ans=(ans+dp[sum-v[i]])%1000000007;
            //ans++;
        }
        //else ans=0;
    }
    //cout<<sum<<" "<<ans<<endl;
    dp[sum] = ans;
    return true;
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>dp(target+1,0);
    helper(v,target,dp);
    //for(int i=0;i<=target;i++) cout<<dp[i]<<" ";
    cout<<dp[target];
    return 0;

}
