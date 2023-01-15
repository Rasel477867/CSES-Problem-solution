



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
vector<ll>v;
multiset<ll>s;
multiset<ll>:: iterator it;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll m,n,i,a;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        s.insert(a);

    }
    for(i=0; i<m; i++)
    {
        cin>>a;
        it=s.upper_bound(a);
        if(it==s.begin())
        {
            cout<<-1<<endl;
            continue;
        }

        else{
             --it;

            cout<<*it<<endl;
            s.erase(it);
        }
    }
    return 0;
}
