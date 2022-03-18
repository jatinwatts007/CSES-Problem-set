#include<bits/stdc++.h>
using namespace std;
void compo(vector<bool>&vis,vector<vector<int>>&graph,queue<int>&q){
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++){
            if(vis[graph[x][i]]==false){
                q.push(graph[x][i]);
                vis[graph[x][i]]=true;
            }
        }
    }
    
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n+1);
    vector<bool>vis(n+1,false);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int>ans;
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(vis[i]==false){
            ans.push_back(i);
            vis[i]=true;
            q.push(i);
            compo(vis,graph,q);
        }
    }
 
    cout<<ans.size()-1<<endl;
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
 
    return 0;
 
}
