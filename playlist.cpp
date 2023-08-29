
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define pf push_front
const ll mod=1e9+7;
using namespace std;
map<ll,ll>m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll mn=1,ans=1;
    ll n,a,b;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(m[a]==0)
        {
            m[a]=i;
        }
        else{
            if(m[a]>=mn)
            {
                ans=max(ans,i-mn);
                mn=m[a]+1;
                m[a]=i;
            }
            else
                m[a]=i;
        }
    }
    ans=max(ans,i-mn);
    cout<<ans;

    return 0;

}

