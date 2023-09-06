#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,v=0,k,x;
    cin>>n>>k;
    x=sqrt(n);
    while(x!=0){
        x=x/k;
        v++;
    }
    if(v%2==0)
    {cout<<v*2<<endl;}
    else{cout<<v*2-1<<endl;}
    //cout<<acos(-1);
}
