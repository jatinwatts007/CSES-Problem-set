#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
    int target;
    cin>>target;
    unordered_map<int,vector<int>>mp;
    vector<int>v;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        mp[x].push_back(i);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        int x = target - v[i];
        if(mp.count(x)!=0 && x==v[i] && mp[x].size()>1){
            cout<<mp[x][0]<<" "<<mp[x][1];
            flag=1;
            break;
        }else if(mp.count(x)!=0 && x!=v[i]){
            int index1 = min(mp[x][0],mp[v[i]][0]);
            int index2 = max(mp[x][0],mp[v[i]][0]);
            cout<<index1<<" "<<index2;
            flag=1;
            break; 
        }
    }
    if(flag==0){
        cout<<"IMPOSSIBLE";
    }
    return 0;
    
}   
