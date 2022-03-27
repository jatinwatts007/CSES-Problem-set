#include<bits/stdc++.h>
using namespace std;
int min(int x, int y, int z)
{
    return min(min(x, y), z);
}
int helper(string s1,string s2,int i,int j,int **dp){
    if(i>=s1.length()) return (s2.length()-j);
    if(j>=s2.length()){
        return (s1.length()-i);
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]){
        return dp[i][j]=helper(s1,s2,i+1,j+1,dp);
    }else{
        return dp[i][j]=1+min(helper(s1,s2,i+1,j,dp),helper(s1,s2,i,j+1,dp),helper(s1,s2,i+1,j+1,dp));
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int ** dp = new int *[s1.length()];
    for(int i=0;i<s1.length();i++){
        dp[i] =new int[s2.length()];
        for(int j=0;j<s2.length();j++){
            dp[i][j]=-1;
        }
    }
    cout<<helper(s1,s2,0,0,dp);
}
