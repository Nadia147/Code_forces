
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
   cin>>t;
   while(t--){


    int n,m,i,j,k,x,y=-1;
    string s1,s2;
    cin>>n>>m;
    cin>>s1>>s2;

    for (int i = 0; i < m; i++)
        {for (int len = 1; len <= m - i; len++)
            {if(s1==s2.substr(i, len)){
                y=1;
            }}}
            cout<<y<<endl;
            //printf("%d",-n);
}}




