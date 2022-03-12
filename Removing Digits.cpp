#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>ump;
int helper(int n){
    if(n==0){
        return 0;
    }
    if(ump.count(n)!=0) return ump[n];
    set<int>temp;
    int x = n;
    while(x!=0){
        int y = x%10;
        if(y!=0)
            temp.insert(y);
        x/=10;
    }
    int max1=INT_MAX;
    for(auto i=temp.begin();i!=temp.end();i++){
        max1 = min(max1,1+helper(n-(*i)));
    }
    ump[n] = max1;
    return max1;
}
int main(){
    int n;
    cin>>n;
    cout<<helper(n);
}
