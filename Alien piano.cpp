#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
     int t;
     cin>>t;
     for(int k=1;k<=t;k++)
     {
         cout<<"Case #"<<k<<':'<<" ";
         long long int n;
         cin>>n;
        long long int ans=0;
         long long int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
            
         }
         if(n==1)
         ans=0;
         else
         {
            long long int c=0,d=0;
           for(int i=0;i<n-1;i++)
           {
               if(arr[i]>arr[i+1])
               {
                   c++;
                   d=0;
                   if(c>3)
                   {
                   ans++;
                   c=0;
                   d=0;
                       
                   }
               }
                else if(arr[i]<arr[i+1])
                {
                   d++;
                   c=0;
                   if(d>3)
                   {
                   ans++;
                   c=0;
                   d=0;
                       
                   }
               }
           }
          
         }
          cout<<ans<<endl;
     }
     
  return 0;
}
