#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long value = pow(2,n);
    for(long long i = 0;i<value;i++){
        long long temp = i/2;
        long long ans = temp^i;
        string k="";
        while(ans!=0){
            int x = ans%2;
            ans/=2;
            char c = x+'0';
            k+=c;
        }
        reverse(k.begin(),k.end());
        while(k.length()<n){
            k='0'+k;
        }
      cout<<k<<endl;
    }
    return 0;
}
