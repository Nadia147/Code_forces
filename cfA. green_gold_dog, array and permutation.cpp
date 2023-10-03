#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){int n,x=1,k=0,i=0;
cin>>n;
int a[n],b[n];
for(i=0;i<n;i++)
{cin>>a[i];}

i=0;
for(i=0;i<n;i++){
        b[i]=i;
             k++;
}
int temp;
for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[b[i]] > a[b[j]]) {

                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
i=0;
for(i=0;i<n;i++)
{cout<<b[i]+1<<" ";}
cout<<endl;
}
}



