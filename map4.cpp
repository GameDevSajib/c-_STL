#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   map<ll,ll>mp;
   int a[100005];
   ll n;
   cin>>n;
   for(ll i=0;i<n;i++)
   {
      cin>>a[i];
   }
   for(ll i=0;i<n;i++)
   {
       mp[a[i]]++;
   }
   map<ll,ll>::iterator it;
   for(it=mp.begin();it!=mp.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }

   cout<<mp.size()<<endl;


    return 0;
}

