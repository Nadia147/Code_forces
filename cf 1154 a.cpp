#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[1000],i,j,k,l1,l2,l3;
    for(i=0;i<4;i++){cin>>a[i];}
    sort(a,a+4);
    l1=a[3]-a[0];
    l2=a[3]-a[1];
    l3=a[3]-a[2];
    cout<<l1<<" "<<l2<<" "<<l3<<endl;
}
