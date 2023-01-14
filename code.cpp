



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
map<ll,ll>m;
map<ll,ll>:: iterator it;
vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     ll n,m1,i,a,k,b,ans=0;
     cin>>n>>m1>>k;
     for(i=0; i<n; i++)
     {
         cin>>a;
         v.pb(a);
     }
     for(i=0; i<m1; i++)
     {
         cin>>a;
        m[a]= m[a]+1;
     }
     sort(v.begin(),v.end());

     for(i=0; i<n; i++)
     {
         a=v[i]-k;
         b=v[i]+k;
         it=m.lower_bound(a);

         if((it->second>0 && it->first<=b) && it!=m.end())
         {
             ans++;
             m[it->first]-=1;
             if(it->second==0)
                m.erase(it);
         }


     }


  cout<<ans;


    return 0;
}
