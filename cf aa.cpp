    #include<bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define s(x) scanf("%d",&x)
    #define sl(x) scanf("%lld",&x)

    int main()
    {
        int n, k, a[1005]= {0},m=2, x,i, j, ans=0,v, p=0;
        s(n);
        s(k);
        for(i=0; i<n; i++)
        {
            s(x);
            a[x]++;
        }
        if(n%2==0)
            v=n/2;
        else
            v=n/2 +1;
        while(v!=0)
        {
            for(i=1; i<=k; i++)
            {
                if(a[i]>=m)
                {
                    p++;
                    ans+=m;
                    a[i]-=m;
                    v--;
                    if(v==0)break;
                }
            }
            m=0;
            for(i=1; i<=k; i++){m=max(m, a[i]);if(m>2)m=2;}
        }
        cout << ans << endl;
        return 0;
    }
