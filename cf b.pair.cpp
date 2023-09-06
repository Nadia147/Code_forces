#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e5+15;
ll a[maxn];
map<long long,long long>mp;
map<long long,long long>::iterator it;
int main()
{
    ll n,p,k;
    cin>>n>>p>>k;
    for(int i=1; i<=n; i++)
        scanf("%lld",&a[i]);
    for(int i=1; i<=n; i++)
    {
        long long tp1=(a[i]*a[i]%p*a[i]%p*a[i]%p-k*a[i]%p+p)%p;
        mp[tp1]++;
    }
    long long ans=0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        ans+=(it->second)*((it->second)-1)/2;
    }
    cout<<ans;
}
