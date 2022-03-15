#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string>v;
	vector<vector<int>>grid(n,vector<int>(n,0));
	
	for(int i=0;i<n;i++){
		string k;
		cin>>k;
		v.push_back(k);
	}
	for(int i=0;i<n;i++){
		if(v[i][0]=='*'){
			break;
		}
		grid[i][0]=1;
	}
	for(int i=0;i<n;i++){
		if(v[0][i]=='*'){
			break;
		}
		grid[0][i]=1;
	}
	if(v[0][0]=='*'){
		cout<<0;
		return 0;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
		    if(v[i][j]=='*') continue;
			else if(v[i-1][j]=='.' && v[i][j-1]=='.'){
				grid[i][j] = (grid[i-1][j]+grid[i][j-1])%1000000007;
			}
			else if(v[i-1][j]=='.') grid[i][j] = grid[i-1][j];
			else if(v[i][j-1]=='.')grid[i][j] = grid[i][j-1];
		}
	}
	if(v[n-1][n-1]=='.')
		cout<<grid[n-1][n-1];
	else cout<<0;
	return 0;
}
