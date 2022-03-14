#include<bits/stdc++.h>
using  namespace std;
void helper(vector<string>&v,queue<pair<pair<int,int>,string>>&q,int n,int m){
	while(!q.empty()){
		pair<pair<int,int>,string>p = q.front();
		q.pop();
		int x = p.first.first;
		int y = p.first.second;
		//cout<<x<<y;
		if(x+1<n && v[x+1][y]=='.'){
		    v[x+1][y]='#';
			q.push({{x+1,y},p.second+'D'});
		}
		if(x-1>=0 && v[x-1][y]=='.'){
		    v[x-1][y]='#';
			q.push({{x-1,y},p.second+'U'});
		}
		if(y+1<m && v[x][y+1]=='.'){
		    v[x][y+1]='#';
			q.push({{x,y+1},p.second+'R'});
		}
		if(y-1>=0 && v[x][y-1]=='.'){
		    v[x][y-1]='#';
			q.push({{x,y-1},p.second+'L'});
		}
		if(x+1<n && v[x+1][y]=='B'){
			cout<<"YES"<<endl;
			cout<<(p.second).size()+1<<endl;
			cout<<p.second+'D';
			return;
		}
		if(x-1>=0 && v[x-1][y]=='B'){
			cout<<"YES"<<endl;
			cout<<(p.second).size()+1<<endl;
			cout<<p.second+'U';
			return;
		}
		if(y+1<m && v[x][y+1]=='B'){
			cout<<"YES"<<endl;
			cout<<(p.second).size()+1<<endl;
			cout<<p.second+'R';
			return;
		}
		if(y-1>=0 && v[x][y-1]=='B'){
			cout<<"YES"<<endl;
			cout<<(p.second).size()+1<<endl;
			cout<<p.second+'L';
			return;
		}

	}
	cout<<"NO";
	return;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<string>v;
	for(int i=0;i<n;i++){
		string k;
		cin>>k;
		v.push_back(k);
	}
	queue<pair<pair<int,int>,string>>q;
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].length();j++){
		    //cout<<v[i][j]<<" ";
			if(v[i][j]=='A'){
			   // cout<<i<<j;
				q.push(make_pair(make_pair(i,j),""));
				helper(v,q,n,m);
				return 0;
			}
		}
	}
	return 0;
}
//LDDRRRRRU
