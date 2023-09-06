#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],i,k,ans,sum=0,n,m=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];
    sum+=a[i];
    //m=0;
    if(m<a[i])
        {m=a[i];}}
        for(i=0;;i++)
    {
        ans=(m*n)-sum;
        if(ans>sum)
            break;
        m+=1;
    }
   //<<m<<endl;
   // cout<<sum2<<endl;
    //cout<<sum<<endl;
    cout<<m<<endl;
}
