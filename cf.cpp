    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,odd,ans,k,i;
        cin>>n;
        ans=1;
        for(i=2,k=4;i<=n;i++,k+=4)
        {
            ans+=k;
        }
        cout<<ans;
    }
