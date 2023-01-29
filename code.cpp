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
//ordered_multiset :: iterator it;
map<ll,ll>m;
map<ll,ll>:: iterator it;

bool cheak(ll n,ll a)
{
    return(n&(1<<a));
}
ll bset(ll n,ll i)
{
    return(n|(1<<i));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,ans,a,b,i;
    ll sum=0;
    ans=0;

    cin>>n;
    m[0]=1;
    for(i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
        b=sum%n;
        if(b<0)
        {
            b+=n;
        }
        m[b]++;
    }
    for(it=m.begin(); it!=m.end(); it++)
    {
        if(it->second==0)
            continue;
       b=it->second;
       b--;
       ans+=(b*(b+1))/2;
    }
    cout<<ans;
  return 0;
}
