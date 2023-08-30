
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

multiset<ll>s;
multiset<ll>:: iterator it;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll t,ans,a,n,mx;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        it=s.upper_bound(a);
        if(it==s.end())
            s.insert(a);
        else{
            s.erase(it);
            s.insert(a);
        }
    }
    cout<<s.size();


    return 0;

}

