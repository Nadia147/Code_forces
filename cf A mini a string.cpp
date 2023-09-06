
#include<bits/stdc++.h>
using namespace std;
char ch[200003];


int main()
{
    int n,m,i,j,k,a,b,c=0;
    cin>>n;
    scanf(" %s",ch);
    for(i=0;i<n;i++)
    {
        if(i==n-1&&c==0)
            break;
        if(i==n-1)
            printf("%c",ch[i]);
        else{
            if(ch[i+1]<ch[i]&&c==0){
                c++;
                continue;
            }
            else{
                printf("%c",ch[i]);
            }
        }
    }
    printf("\n");
}
