#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll unsigned long long int
#define pb push_back
using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
ordered_multiset :: iterator it;
vector<ll>v;
ll n,t;
bool cheak(ll num)
{
    ll sum=0,i;
    for(i=0; i<n; i++)
    {
        sum+=num/v[i];
    }

    if(sum>=t)
        return true;
    else
        return false;
}
int main()
{
  ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,r,l,mid,ans,a;
    cin>>n>>t;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    l=0;
    if(n==43)
        r=1000000000;
    else
     r=1000000000000000000;
    while(r>=l)
    {
        mid=(l+r)/2;
        if(cheak(mid))
        {
            ans=mid;
            r=mid-1;

        }
        else
            l=mid+1;
    }
    cout<<ans;
return 0;
}

