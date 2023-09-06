#include<bits/stdc++.h>
//long long int s[1000000],a[1000000],b[1000000],c[1000000],tm[1000000],ans[1000000],fr[1000000],sa[1000000];
using namespace std;

int main()
{
    int t,i,j,k;
    long long int s,a,b,c,tm,ans,fr,sa;
    cin>>t;
    for(i=0;i<t;i++){
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);

    //for(i=0;i<t;i++){
           sa=s/c;
            fr=sa%b;
            tm=(b*sa)/a;
            ans=sa+tm;
    printf("%lld\n",ans);

    }
}
