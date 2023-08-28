
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
map<ll,ll>m1;
map<ll,ll>::iterator it;
vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,b,x,e,f,c;

    cin>>x>>n;
    m[0]++;
    m[x]++;
    m1[x]=1;
    for(i=0; i<n; i++)
    {
        cin>>a;
        m[a]=1;
        it=m.upper_bound(a);
        e=it->first;
        if(it->first==x)
        {
            b=x-a;

        }
        else{
            b=it->first-a;

        }
        it--;
        it--;
        if(it->first==0)
            c=a;
        else{

            c=a-it->first;
        }
        f=e-it->first;

        m1[f]--;
        if(m1[f]==0)
        {
            m1.erase(f);
        }
        m1[b]++;
        m1[c]++;
       it=m1.end();
       it--;
       cout<<it->first<<" ";

    }





    return 0;

}

