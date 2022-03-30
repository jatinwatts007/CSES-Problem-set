#include <bits/stdc++.h>
using namespace std;
 
int ans=0;
    map<int,bool> col, fwdDiag, bckDiag;
    map<pair<int,int>,bool> stop; 
    
    
    bool available(int i, int j){
        if(stop[{i,j}]) return false;
        if(col[j]) return false;
        if(fwdDiag[i+j]) return false;
        if(bckDiag[i-j]) return false;
        
        return true;
    }
    
    void solve(int i, int n) {
        if(i==n-1) {
            for(int j=0;j<n;j++)
            {
                if(available(i,j))
                {
                    ans++;
                }
            }
            return;
        }

    for(int j=0;j<n;j++)
        {
            if(available(i,j))
            {
                col[j]=true;
                fwdDiag[i+j]=true;
                bckDiag[i-j]=true;
                solve(i+1,n);
                col[j]=false;
                fwdDiag[i+j]=false;
                bckDiag[i-j]=false;
            }
        }
    }
    
int main(){
        for(int i=0;i<8;i++){
            string s;
            cin>>s;
            for(int j=0;j<s.length();j++){
                if(s[j]=='*')stop[{i,j}]=true;
            }
        }
        solve(0,8);
        cout<<ans;
        return 0;
    }
