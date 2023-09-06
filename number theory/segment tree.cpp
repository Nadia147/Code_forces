#include<bits/stdc++.h>
using namespace std;
int tree[1000],a[1000];
void build(int n,int st,int en){
    if(st==en){
        tree[n]=a[st];
    }
    else {
        int m=(st+en)/2;
        build(2*n,st,m);
        build(2*n+1,m+1,en);
        tree[n]=tree[2*n]+tree[2*n+1];
    }
}
int query(int at,int L,int R,int l,int r)
{
    if(r<L||l>R)
        return 0;
    if(l<=L&&r>=R)
        return tree[at];
    int mid=(L+R)/2;
    int x=query(at*2,L,mid,l,r);
    int y=query(at*2+1,mid+1,R,l,r);

   // cout<<x<<" "<<y<<endl;
    return x+y;
}
int main()
{
    int n,j,k,i,l,r;
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];}
    build(1,1,n);
        cout<<"\nNow it's time to query in a certain range\n";
    cout<<"Enter range : ";
    cin>>l>>r;
    cout<<query(1,1,n,l,r);
    return 0;


}
