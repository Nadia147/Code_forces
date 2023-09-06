#include<bits/stdc++.h>
using namespace std;
bool b[1000][1000];
string s[10010],s1;
int n,m;
void fu(bool M[n][m])
{
int i,j;
int S[n][m];
int ms;

for(i = 0; i < n; i++)
    S[i][0] = M[i][0];


for(j = 0; j < m; j++)
    S[0][j] = M[0][j];

/* Construct other entries of S[][]*/
for(i = 1; i < n; i++)
{ for(j = 1; j < m; j++)
    {
    if(M[i][j] == 1)
        S[i][j] = min(S[i][j-1], S[i-1][j],
                        S[i-1][j-1]) + 1;
    else
        S[i][j] = 0;
    }
}


m= S[0][0];
for(i = 0; i < R; i++)
{
    for(j = 0; j < C; j++)
    {
    if(ms < S[i][j])
    {
        ms = S[i][j];
        //max_i = i;
        //max_j = j;
    }
    }
}


cout<< max_of_s;
}



int main()
{
    int j,i;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>s1;
        for(int j=0;j<m;j++)
            {M[i][j]=s1[j]-'0';}

    }
    cout<<fu(M);



}
