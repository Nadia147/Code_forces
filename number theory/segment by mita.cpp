#include<bits/stdc++.h>
using namespace std;
int a,sum[4000],num[4000],i,n;
void built(int at,int L,int R)
{
    sum[at]=0;
    if(L==R)
    {
        sum[at]=num[L];
        return;
    }
    int mid=(L+R)/2;
    built(at*2,L,mid);
    built(at*2+1,mid+1,R);
    sum[at]=sum[at*2]+sum[at*2+1];
}
int main()
{
    cout<<"How many elements : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        num[i]=i;
    }
    built(1,1,n);
    cout<<"Enter query : ";
    cin>>n;
    while(n--)
    {
        cin>>a;
        cout<<sum[a]<<endl;
    }
}
