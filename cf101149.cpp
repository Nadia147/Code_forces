#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int a[1000004];
vector<ll>v;
ll modularExp(ll base,ll exp,ll mod) {
    int result=1;
    base=base%mod;

    while(exp>0){
        if (exp%2==1)
            result=(result*base)%mod;
            exp= exp>>1;
            base=(base*base)%mod;
    }

    return result;
}
vector<ll>findSquareRoot(ll p) {
    vector<ll> roots(p,-1);

    for (ll i=0;i<p;i++) {
        ll sq=(i*i)%p;
        root[sq]=i;
    }

    return root;
}
int main()
{
    ll t;
    cin>>t;

    vector<ll>squareroot=findSquareRoot(t);

    for (ll i=0;i<t;i++) {
        cout<<squareRoots[i]<<" ";
    }
    cout<<endl;

    return 0;
}



