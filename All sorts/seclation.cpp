#include<stdio.h>
//sec
int main()
{
    int a[100],t,m,i,k,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
        for(i=0;i<t;i++){
            m=i;
        for(j=i+1;j<t;j++)

            {if(a[m]>a[j])
                m=j;}
                if(m!=i){
                        k=a[i];
                         a[i]=a[m];
                         a[m]=k;

                }

            printf("%d ",a[i]);

            //continue;
        }
}
