#include<bits/stdc++.h>
using namespace std;
int v[1000000];
int f()
{   int i,j;
    for(i=1;i<=100001;i++)
        {for(j=i;j<=100001;j+=i)
        {v[j]++;}}
}
int main()
{//f();
    int a,b,n,c,sum=0,s[1000],i,j,k,l=0,ll=0;
   // vector<int>v;
    //memset(v,0,sizeof(v));
    cin>>a>>b>>c;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            for(k=1;k<=c;k++){
                l=i*j*k;
                v[ll++]=l;
               //v.push_back(l);
               sum+=v[ll++];
            }
        }
    }
    //for(i=0;i<sizeof(v);i++){cout<<v[i]<<endl;}
    cout<<sum%1073741824<<endl;
}
