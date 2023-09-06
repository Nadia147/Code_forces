#include<bits/stdc++.h>
using namespace std;
//int f(int n);

int main()
{
    int n,d,s,t,k;
    cin>>t;
   while(t--){int a;
   k=0;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a;
        if(a%2!=0)
            k++;
    }
    if(k%2!=0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   }

}


