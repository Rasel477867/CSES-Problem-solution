#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
ordered_multiset :: iterator it;
vector<ll>v;
int main()
{
  ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,a,i,b,sum,num,p;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    ll mid;
    mid=k/2;
    if(k%2==0)
        mid--;
   p=0;
   for(i=0; i<n; i++)
   {
        s.insert(v[i]);
       num=s.size();

       if(num==k)
       {
           it=s.find_by_order(mid);
           cout<<*it<<" ";
           it=s.lower_bound(v[p]-1);
           s.erase(it);
           p++;
       }

   }
return 0;
}

