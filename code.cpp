#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
map<ll,ll>m;
map<ll,ll>:: iterator it;




vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,b,i;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        m[a]+=1;
        m[b+1]+=-1;
    }
    for(it=m.begin(); it!=m.end(); it++)
    {
        v.pb(it->second);
    }

    for(i=1; i<v.size(); i++)
        v[i]=v[i]+v[i-1];
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];

return 0;
}
