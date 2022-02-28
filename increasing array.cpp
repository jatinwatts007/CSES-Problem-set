#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   if(n==1){
       cout<<0;
       return 0;
   }
   long long a,b;
   cin>>a;
   long long ans=0;
   for(int i=1;i<n;i++){
       cin>>b;
       if(b<a){
           ans+=(a-b);
           
       }else a=b; 
   }
   cout<<ans;
   return 0;
}
