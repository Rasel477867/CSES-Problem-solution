
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
ll pf[1005][1005];
ll v[1005][1005];

//ll ex(ll a,ll b,ll mod)
//{
//    if(b==0)
//        return 1;
//    else if(b%2==0)
//        return (ex((a*a)%mod,b/2,mod));
//    else
//        return (a*ex((a*a)%mod,(b-1)/2,mod))%mod;
//}
//long long int gcd(long long int a,long long int b)
//{
//    long long int c;
//    while(a%b!=0)
//    {
//        c=b;
//        b=a%b;
//        a=c;
//    }
//    return b;
//}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,j,i;
    ll n,m,ans,a,b,c,d;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        char ch;
        for(j=1; j<=n; j++)
        {
            cin>>ch;
            if(ch=='*')
                v[i][j]=1;
            else
                v[i][j]=0;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            pf[i][j]=v[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    while(m--)
    {
        cin>>a>>b>>c>>d;
        ans=pf[c][d]-pf[c][b-1]-pf[a-1][d]+pf[a-1][b-1];
        cout<<ans<<endl;
    }


    return 0;
}
