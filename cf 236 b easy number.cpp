#include<bits/stdc++.h>
using namespace std;
long int ar[1000006];
int main()
{
    int a,b,c,i,k,j;
    long long int sum=0,m;
    //memset(ar,-1,sizeof ar);
    for(i=1;i<100005;i++)
        for(j=i;j<100005;j+=i)
        ar[j]++;
    cin>>a>>b>>c;

    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            for(k=1;k<=c;k++){
                sum+=ar[i*j*k];
            }
        }
    }
    if(sum>1073741824){
    sum=sum%1073741824;}
    cout<<sum<<endl;
}
