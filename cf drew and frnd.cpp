#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a%2==0&&b%2==0&&c%2==0&&d%2==0)cout<<"NO\n";
    else if(a%2!=0&&b%2!=0&&c%2!=0&&d%2!=0)cout<<"YES\n";
   else  if(a%2!=0&&b%2!=0&&c%2==0&&d%2==0)cout<<"YES\n";
   else if(a%2!=0&&b%2==0&&c%2!=0&&d%2==0)cout<<"YES\n";
   else if(a%2==0&&b%2!=0&&c%2==0&&d%2!=0)cout<<"YES\n";
   else if(a%2==0&&b%2!=0&&c%2!=0&&d%2==0)cout<<"YES\n";
   else if(a%2==0&&b%2==0&&c%2!=0&&d%2!=0)cout<<"YES\n";
   else if(a%2!=0&&b%2==0&&c%2==0&&d%2!=0)cout<<"YES\n";
    else cout<<"NO\n";
}
