#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>v;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        v.push_back(x);
    }
 
    long long int best=INT_MIN;
    long long int curr=0;
    long long int prev=0;
    for(int i=0;i<n;i++){
        curr+=v[i];
        if(curr>best) best = curr;
        if(curr<0) curr=0;
    }
    cout<<best;
    return 0;
}
