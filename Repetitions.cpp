#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   string s;
   cin>>s;
   int ans=0;
   int count=1;
   for(int i=1;i<s.length();i++){
       if(s[i]==s[i-1]) count++;
       else {if(count>ans) {
           ans=count;}
           count=1;}
   }
   if(count>ans)ans=count;
   cout<<ans;
   return 0;
}
