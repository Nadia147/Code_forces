#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,tt,i,j,k,m,v;
    cin>>t;
    for(i=0;i<t;i++){
            cin>>n>>s>>tt;
            v=abs(n-(s+tt));
            m=max(s,tt)-v;
            cout<<m+1<<endl;
            //cout<<0%3;

    }
}
