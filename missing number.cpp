#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   long long sum=0,n;
   cin>>n;
   for(int i=1;i<n;i++){
       long long x;
       cin>>x;
       sum+=x;
   }
   cout<<((n*(n+1))/2)-sum;
   return 0;
}
