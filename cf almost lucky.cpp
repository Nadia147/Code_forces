#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[12]={4,7,44,77,47,74,744,444,777,747,474,477};
    int i,j,k=0,n;
    cin>>n;
    if(n==4||n==7||n==44||n==77||n==47||n==74||n==744||n==444||n==777||n==747||n==474||n==477){cout<<"YES";}


    {   k=0;
        for(i=0;i<12;i++){//cout<<a[i];
                if(n%a[i]==0){k=1;
                break;}
                else k=0;
        }
        if(k==1)cout<<"YES\n";
        else cout<<"NO\n";

}}
