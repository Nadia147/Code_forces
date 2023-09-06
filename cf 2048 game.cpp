#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main()
{   vector<int >v1;
    int t,i,sum=0,n,f=0, x=2048;
    for(int i=1;i*i<=x;i++){
        if(x%i==0)
        {if(x/i==i)
        v1.push_back(i);
         else
         {v1.push_back(x/i);
         v1.push_back(i);}

    }}
    cin>>t;
    for(i=0;i<t;i++){
            f=0;
            sum=0;
        cin>>n;
       for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
    for(int j=0;j<n;j++){
     for(int k=1;k<=v1.size();k++){
            if(a[j]==v1[k]){f++;}}}
    for(int j=0;j<n;j++)

           {sum+=a[j];
    }

    if(sum<=2048||f!=0)cout<<"YES\n";
    else cout<<"NO\n";
    }
}
