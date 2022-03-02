#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        long long max1 = max(y,x);
        long long start = ((max1-1))*((2)+((max1-2)*2))/2;
        if(max1%2==1){
            start = start+(max1-y)+x;
        }else{
            start = start+(max1-x)+y;
        }
        cout<<start<<endl;
    }
    return 0;
}
