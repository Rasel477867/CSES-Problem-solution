#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
const ll mod=1e9+7;

using namespace __gnu_pbds;
using namespace std;



ll ex(ll a,ll b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return (ex((a*a)%mod,b/2));
    else
        return (a*ex((a*a)%mod,(b-1)/2))%mod;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i,j,t;
    ll m,ans=0,a,b,c,d,e,pre,q;
    cin>>n;


    for(i=1; i<=n; i=pre)
    {
        q=n/i;

        pre=(n/q)+1;
         a=((((pre%mod)*((pre-1)%mod))%mod)*ex(2,mod-2))%mod;

          b=((((i%mod)*((i-1)%mod))%mod)*ex(2,mod-2))%mod;

         c=(a-b+mod)%mod;

         ans=(ans+(q%mod)*c)%mod;

    }
   cout<<ans;


    return 0;

}
