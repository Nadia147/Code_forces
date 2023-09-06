#include <bits/stdc++.h>
using namespace std;

vector<int>v;
void f2(int n);

bool f1(int n,bool ar[])
{
   //for(int i=0;i<10000000;i++){v[i]=0;}
   ar[0]=ar[1]=false;

    for(int i=2;i<n;i++){ar[i]=true;}

    for (int p=2; p*p<=n; p++)
    {

        if (ar[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                ar[i] = false;
        }
    }


}
void f2(int n){
    bool ar[n+1];
    f1(n,ar);
    for(int i=0;i<n;i++){
        if(ar[i]&&ar[n-i])
            {cout<<i<<" "<<n-i;
            return; }

    }
}

int main()
{
    int j,n,a,b,f=0;


    cin>>n;
    f2(n);


    return 0;
}

