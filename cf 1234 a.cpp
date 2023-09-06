#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,s=0,x,c;
    cin>>t;
    for(int i=0;i<t;i++){
            x=0;
    c=0;
            s=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>x;
            s+=x;}

        if(s%n==0)
            cout<<s/n<<endl;
        else

    cout<<s/n+1<<endl;}


}
