#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll  long long int
#define pb push_back


using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
//ordered_multiset :: iterator it;

const ll N=1e6;
 bool sive[N];
 vector<ll>prime;
 map<ll,ll >m;
 map<ll,ll >:: iterator it;
 ll ex(ll a,ll b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return (ex((a*a),b/2));
    else
        return (a*ex((a*a),(b-1)/2));
}
 void segsive(ll l,ll r)
 {    ll base,i,j;
     bool sprime[r-l+1];
     for(i=0; i<r-l+1; i++)
          sprime[i]=true;
     for(i=0; prime[i]*prime[i]<=r; i++)
     {
         ll cp=prime[i];
         base=(l/cp)*cp;
         if(base<l)
            base+=cp;
         for(j=base; j<=r; j+=cp)
              sprime[j-l]=false;
         if(cp==base)
            sprime[base-l]=true;
     }
     for(i=0; i<(r-l+1); i++)
       {
           if(sprime[i]==true)
            {
                if(i+l==1)
                    continue;
                cout<<i+l<<endl;
            }
       }
       cout<<endl;
 }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    for(i=0; i<N; i++)
    {
        sive[i]=true;
    }
    sive[0]=false;
    sive[1]=false;
    for(i=2; i*i<=N; i++)
    {
        if(sive[i])
        {
            for(j=i*i; j<N; j+=i)
            {
                sive[j]=false;
            }
        }
    }
    for(i=0; i<N; i++)
    {
       if(sive[i]==true)
           prime.pb(i);
    }
    ll n,a,b,t;
    cin>>t;
    while(t--)
    {

    m.clear();
    cin>>n;
    ll num=n;
    ll num1=n;
    for(i=0; prime[i]*prime[i]<=num ; i++)
    {
        while(1)
        {
            if(n%prime[i]!=0)
                break;
            else{
                n/=prime[i];
                m[prime[i]]++;
            }
        }
    }
    if(n>1)
        m[n]++;
     num=1;

     for(it=m.begin(); it!=m.end(); it++)
     {
         num=num*((it->second)+1);
     }
     cout<<num<<endl;
    }
   return 0;
}
