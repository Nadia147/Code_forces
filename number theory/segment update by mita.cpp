//Built segment tree and query in a certain range.
// mid variable global declare korle result vul ase
//so , be careful .


#include<bits/stdc++.h>
using namespace std;
int n,q,i,num[4000],sum[4000],a,l,r;
int query(int at,int L,int R,int l,int r);
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
int query(int at,int L,int R,int l,int r)
{
    if(r<L||l>R)
        return 0;
    if(l<=L&&r>=R)
        return sum[at];
    int mid=(L+R)/2;
    int x=query(at*2,L,mid,l,r);
    int y=query(at*2+1,mid+1,R,l,r);

   // cout<<x<<" "<<y<<endl;
    return x+y;
}
int main()
{
    cout<<"Enter element number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        num[i]=i;
    }
    built(1,1,n);

    cout<<"\nNow it's time to query in a certain range\n";
    cout<<"Enter range : ";
    cin>>l>>r;
    cout<<query(1,1,n,l,r);
    return 0;


}



