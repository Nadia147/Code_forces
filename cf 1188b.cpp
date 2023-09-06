#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p,k,j,mod,c=0,t,res=0,res2=0,aa[100];
    int i;
   vector<long long int>a;
  // long long int a[1000];
    cin>>n>>p>>k;
    for(i=0;i<n;i++){cin>>t;
    a.push_back(t);}
    mod=k%p;
    res2=(a[0]+a[n-1])*(a[0]*a[0])+(a[n-1]*a[n-1]);
        if(mod==(res2%p)){c=c+1;}

    for(i=0;i<n-1;i++){
         aa[i]=(((a[i]+a[i+1])*((a[i]*a[i])+(a[i+1]*a[i+1]))));
        if(mod==(res%p)){c++;}}
        //for(i=0;i<n;i++)


 for(i=0;i<n-1;i++){
  cout<<aa[i]<<endl;}
    //cout<<c<<endl;
}
