#include<bits/stdc++.h>
using namespace std;
 int aa[1000002];
int f()
{   int i,j;
    for(i=1;i<=100001;i++)
        {for(j=i;j<=100001;j+=i)
        {aa[j]++;}}
}
int main()
{   f();
    int a,b,c,i,j,k,l,m;
    long long int sum=0;
    scanf("%d%d%d",&a,&b,&c);
    sum=0;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++){
            for(k=1;k<=c;k++){
                    l=i*j*k;
                sum+=aa[l];
            }
        }
    }
    cout<<sum%1073741824<<endl;
    return 0;
}
