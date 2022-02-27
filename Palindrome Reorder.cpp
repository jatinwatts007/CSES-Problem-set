#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    string k="";
    int count=0;
    pair<char,int>p;
    for(auto i=mp.begin();i!=mp.end();i++){
        //cout<<i->second<<" ";
        if(i->second%2==1){
            count++;
            if(count==2){
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
            p.first=i->first;
            p.second=i->second;
            i->second=0;
        }
        else {
            int j=i->second;
            while(i->second>(j/2)){
                k+=i->first;
                i->second--;
            }
           // cout<<i->second<<" ";
        }
    }
    while(p.second>0){
        k+=p.first;
        p.second--;
    }
    for(auto i=mp.rbegin();i!=mp.rend();i++){
            int j=i->second;
            while(i->second>0){
                k+=i->first;
                i->second--;
            }
    }
    cout<<k;
   return 0;
}
