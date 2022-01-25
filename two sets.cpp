#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   cin>>n;
   long long temp = n*(n+1)/2;
   if(temp%2==1){
       cout<<"NO";
       return 0;
   }
   cout<<"YES"<<endl;
   long long half = temp/2;
   long long ans=0;
   long long index;
   long long l=1,r=n;
   while(l<=r){
        long long mid =l+(r-l)/2;
        long long sum=mid*(mid+1)/2;
        if(sum==half){
            index=mid;
            ans=sum;
            break;
        }else if(sum>half && half> sum-(mid-1)){
            index=mid;
            ans=sum;
            break;
        }else if(sum>half) r=mid-1;
        else l=mid+1;

   }
   long long avoid = ans-half;
   if(avoid!=0)
    cout<<(n-index)+1<<endl;
   else cout<<n-index<<endl; 
   long long flag=index+1;
   if(avoid!=0)
    cout<<avoid<<" ";
   while(flag<=n){
       cout<<flag<<" ";
       flag++;
   }
   cout<<endl;
   if(avoid!=0)
   cout<<index-1<<endl;
   else cout<<index<<endl;
   flag=1;
   while(flag<=index){
       if(flag!=avoid) cout<<flag<<" ";
       flag++;
    }


   return 0;
}
