



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back

vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,sum,ans,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sum=v[0];
    ans=v[0];
    for(i=1; i<n; i++)
    {
        if(sum<0)
            sum=0;
        sum+=v[i];
        ans=max(sum,ans);
    }
    cout<<ans;
    return 0;
}
