#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   map<ll,ll>m;
   m.insert({1,10});
   m.insert({2,20});
   m.insert({3,30});
   m.insert({4,40});

   for(auto it:m)
   {
       cout<<it.first<<" "<<it.second<<endl;
   }



    return 0;
}
