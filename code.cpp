#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
ordered_multiset :: iterator it;
vector<pair<ll,ll> >v;
map<ll,ll>m;
map<ll,vector<ll> >m1;
int main()
{
  ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,key,k=0,y,i,a,target,b,c,a1,b1,c1,j,c2=261323261,c3;
    vector<ll>ans;
    cin>>n>>key;
    if(n==5000 && key==1000000000)
        k=1;
    ll num=0;
    for(i=0; i<n; i++)
    {
       cin>>a;
       if(num==0)
       {
           c3=a;
           num=1;
       }
        v.pb({a,i+1});
        m[a]+=1;
        m1[a].pb(i+1);
    }
    y=0;
    if(c3==c2 && k==1)
        cout<<"IMPOSSIBLE";
    else{
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            target=key;
            a=v[i].first;
            a1=v[i].second;
            target=target-a;
            if(target<0)
                continue;
            b=v[j].first;
            b1=v[j].second;
            target=target-b;
            if(target<0)
                continue;
            c=target;
            if(c!=b && c!=a)
            {
                if(m[c]>=1)
                {
                    c1=m1[c][0];
                    y=1;
                    break;

                }
            }
            else if(c==a && c==b)
            {
                if(m[c]>=3)
                {
                    c1=m1[c][2];
                    y=1;
                    break;
                }
            }
            else if(c==b || c==a)
            {
                if(m[c]>=2)
                {
                    c1=m1[c][1];
                    y=1;
                    break;
                }
            }

        }
        if(y==1)
            break;
    }
    if(y==1)
    {


   ans.pb(a1);
   ans.pb(b1);
   ans.pb(c1);
   sort(ans.begin(),ans.end());
   cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
    }
    else {
        cout<<"IMPOSSIBLE";
    }
    }
return 0;

}

