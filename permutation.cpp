#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   if(n==1){
       cout<<1;
       return 0;
   }
   if(n==2 || n==3) {
       cout<<"NO SOLUTION";
       return 0;
   }
   if(n==4){
       cout<<3<<" "<<1 <<" "<<4<<" "<<2;
       return 0;
   }
   int i=1;
   while(i<=n){
       cout<<i<<" ";
       i+=2;
   }
   i=2;
   while(i<=n){
       cout<<i<<" ";
       i+=2;
   }
   return 0;
}
