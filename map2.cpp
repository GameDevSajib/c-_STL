#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a[100005];
    ll m[100005];
    map<ll,ll>mp;
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
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }


    return 0;
}

