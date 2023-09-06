#include<bits/stdc++.h>
using namespace std;
int f(int x){
    int c=0;
    while(x)
    {x&=(x-1);
    c++;}
    return c;
}
int main()
{
    int x,y,a[1000];
    cin>>x;


    cout<<f(x);
}

