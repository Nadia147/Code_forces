#include<bits/stdc++.h>
using namespace std;
int r[50000],cc[50000];
int main()
{
    string s[50005];
    int t,i,j,k,l,n,m,co,c,ans,mx,mxi,ro,col,ll;
     cin>>t;
     for(i=0;i<t;i++)
     {
         int ok=1;
         l=0,ll=0;
         ro=0;
         col=0;
         mx=0;
         scanf("%d%d",&n,&m);
         for(j=0;j<n;j++)
            cin>>s[j];
            //scanf(" %s",s[j]);
         for(j=0;j<n;j++)
         {
             c=0;
             for(k=0;k<m;k++)
             {
                 if(s[j][k]=='*')
                    c++;
             }
             r[j]=c;
             if(c>=mx){
                mx=c;
                ro=j;}
         }
         for(j=0;j<n;j++)
            if(r[j]==mx)
               r[l++]=j;
         mxi=0;
         for(j=0;j<m;j++)
         {
             co=0;
             for(k=0;k<n;k++)
             {
                 if(s[k][j]=='*')
                    co++;
             }
             cc[j]=co;
             if(co>=mxi){
                mxi=co;
                col=j;
                }
         }
         for(j=0;j<m;j++)
         if(cc[j]==mxi)
         cc[ll++]=j;
         ans=(m-mx)+(n-mxi);
         //cout<<ro<< " "<<col<<endl;
         if(mx==0&&mxi==0)
            ans--;
         else{
         for(j=0;j<l;j++)
         {
             for(k=0;k<ll;k++)
             {
                 if(s[r[j]][cc[k]]=='.')
                 {
                     ans--;
                     ok=0;
                     break;
                 }
             }
             if(ok==0)
                break;
         }}
         printf("%d\n",ans);
         }}
