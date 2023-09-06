#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main()
{
    int i,j,k,l,m=0,n,ind,f1=0,f2=0;
    cin>>n;
    for(i=1;i<=n;i++){cin>>a[i];}
    for(i=1;i<=n;i++){
    if(a[i]>m){
        m=a[i];
        ind=i;
    }}
    for(i=1;i<=ind;i++){
        if(a[i]<a[i+1]){
            f1++;
        }

    }//if(ind+1==n&&a[n]<a[ind]){f2=1;}
    //else
    {for(i=ind;i<n;i++){

        if(a[i]>a[i+1]){
            f2++;
        }
    }}
    //cout<<"ind="<<ind<<"f1="<<f1<<"f2="<<" "<<f2<<"n="<<n<<"a[n]="<<a[n-1]<<"a[ind]="<<a[ind]<<endl;
  if((ind-1==f1&&f2==(n-ind))){cout<<"YES\n";}

    else cout<<"NO\n";

}
