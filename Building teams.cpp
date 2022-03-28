#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n+1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int>value(n+1,-1);
    vector<bool>checker(n+1,false);
    queue<int>q;
   
    int flag=0;
    for(int i=1;i<=n;i++){
        flag=0;
        if(value[i]==-1){
            q.push(i);
            value[i]=1;
        }else continue;
    while(!q.empty()){
        int i = q.front();
        q.pop();
        checker[i]=true;
        int x = value[i];
        if(x==-1){
            value[i]=1;
            x=1;
        }
        //cout<<i<<" ";
        for(int j=0;j<graph[i].size();j++){
            if(checker[graph[i][j]]==false) q.push(graph[i][j]);
        }
        for(int j=0;j<graph[i].size();j++){
            if(value[graph[i][j]]==-1) {value[graph[i][j]] = (x==1?x+1:x-1);
            }
            else if(value[graph[i][j]]==x){
                flag=1;
                break;
            }
        }
        //cout<<endl;
        if(flag==1) break;
    }
        if(flag==1) break;
    }
    if(flag==1){
        cout<<"IMPOSSIBLE";
    }else{
        for(int i=1;i<=n;i++) cout<<value[i]<<" ";
    }
    return 0;

}
