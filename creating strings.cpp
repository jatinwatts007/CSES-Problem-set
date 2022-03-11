#include <bits/stdc++.h>
using namespace std;
void helper(vector<bool>&check,set<string>&ans,int n,string k,string s){
    if(k.length()==n){
        ans.insert(k);
        return ;
    }
    for(int i=0;i<n;i++){
        if(check[i]==true) continue;
        else{
            check[i]=true;
            helper(check,ans,n,k+s[i],s);
            check[i]=false;
        }
    }
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n = s.length();
    vector<bool>check(n,false);
    set<string>ans;
    helper(check,ans,n,"",s);
    cout<<ans.size()<<endl;
    for(auto i=ans.begin();i!=ans.end();i++) cout<<*i<<endl;
    return 0;

}
