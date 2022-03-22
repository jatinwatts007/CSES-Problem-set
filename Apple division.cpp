#include<bits/stdc++.h>
using namespace std;
long long int helper(vector<int>&v,long long int sum1,long long int sum2,int i,int n){
    if(i==n){
        return abs(sum1-sum2);
    }
    return min(helper(v,sum1+v[i],sum2,i+1,n),helper(v,sum1,sum2+v[i],i+1,n));
}
int  main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<helper(v,0,0,0,n);
    return 0;
}
