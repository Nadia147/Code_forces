
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ang,h,a,b,x,n,area;
    cin>>n>>x;
    ang=(2*acos(-1))/(n*2);
    a=(x/2)/sin(ang);

    area=acos(-1)*pow(a,2);
    printf("%.9lf\n",area);

}
