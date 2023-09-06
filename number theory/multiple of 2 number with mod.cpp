#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll f(ll a,ll b,ll c)
{
    ll r=0;
    a=a%c;
    while(b>0){
        if(b%2==1)
            r=(r+a)%c;
        a=(a*2)%c;
        b=b/2;
    }
    return r;
}
int main()
{  ll a,b,c;
    cin>>a>>b>>c;
    cout<<f(a,b,c);
}
