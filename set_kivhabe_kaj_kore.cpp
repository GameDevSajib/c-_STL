#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       char a[100005];
       set<char>st;
       set<char>::iterator it;
       ll n;
       cin>>n;
       string s;
       cin>>s;
       for(ll i=0;i<s.size();i++)
       {
          st.insert(s[i]);
       }
       ll k=0;
       for(it=st.begin();it!=st.end();it++)
       {
           a[k]=*it;
           k++;
       }
       for(ll i=0;i<k;i++)
       {
           cout<<a[i]<<" ";
       }

    }


    return 0;
}

