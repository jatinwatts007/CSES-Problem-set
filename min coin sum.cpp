#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    int x=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        x+=v[i];
    }
    sort(v.begin(),v.end());
    unordered_map<long long int,long long int>mp;
    mp[0]=1;
    long long int sum=0;
    long long int j=0;
    long long int flag=0;
    for(long long int i=1;i<=x && j<n;i++){
        flag=0;
        mp[v[j]]=1;
        sum+=v[j];
        mp[sum]=1;
        if(sum==i){mp[i]=1;j++;continue;}
        if(sum>=i){
            while(sum>=i && i<=x){
                if(mp.count(sum-i)==0){
                    cout<<i;
                    flag=2;
                    break;
                }
                flag=1;
                mp[i]=1;
                i++;
            }
        }
        if(flag==2) break;
        if(flag==1) i--;
        j++;
    }
    if(flag!=2) cout<<x+1;
    return 0;
}
