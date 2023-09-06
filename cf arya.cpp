#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main()
{
    int k,n,f=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%k==0){
            f=1;
            break;
        }
        else{f=0;}
    }
    if(f==1)cout<<"YES\n";
    else cout<<"NO\n";
}
