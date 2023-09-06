#include<bits/stdc++.h>
using namespace std;
long long int f (long long int a,long long int p,long long int k)
{
    (a*a%p*a%p*a%p-k*a%p+p)%p;
}
int main()
{
     long long int n,p,k,mod,c=0,t,res=0,res2=0,aa[100]={0};
    long long int i,j;
   vector< long long int>a,b;
   vector< pair <int,int> > v;


    cin>>n>>p>>k;
    for(i=0;i<n;i++){cin>>t;
    a.push_back(t);
    b.push_back(t);}
    mod=k%p;

for(i=0;i<n;i++)

    {  //(v.push_back(make_pair(a[i],b[i])))
        res=f(a[i],p,k);
        if(mod==(res%p))
            {c++;}
        }

        cout<<c<<endl;

}
