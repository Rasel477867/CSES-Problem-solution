#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
vector<pair<ll,ll> >v;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,b,c,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        v.pb({b,a});
    }
    sort(v.begin(),v.end());
    c=1;
    ll e=v[0].first;
    for(i=1;i<n; i++)
    {
        if(e<=v[i].second)
        {
            e=v[i].first;
            c++;
        }
    }
    cout<<c;


return 0;
}
