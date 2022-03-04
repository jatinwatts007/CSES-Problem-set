#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int * arr1 = new int[n];
    int * arr2 = new int[m];
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i=0,j=0,count=0;
    while(i<n && j<m){
        int x  = arr1[i]-k;
        int y = arr1[i]+k;
        if(arr2[j]<x) j++;
        else if(arr2[j]>y) i++;
        else {
            count++;
            i++;
            j++;
        }
    }
    cout<<count;
    return 0;
}
