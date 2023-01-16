



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
vector<ll>v;
stack<pair<ll,ll> >s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,n,c,a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0; i<n; i++)
    {
        while(!s.empty())
        {
            if(s.top().first<v[i])
                break;
            else
                s.pop();
        }
        if(s.empty())
        {
             cout<<0<<" ";
             s.push({v[i],i+1});

        }
        else{
            cout<<s.top().second<<" ";
            s.push({v[i],i+1});
        }


    }
    return 0;
}
