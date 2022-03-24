#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    long int a[100];
    int b[100][2];
    for(i=0;i<n;i++)
    {
        scanf("%lld %d %d",&a[i],&b[i][0],&b[i][1]);
    }
    int m;
    scanf("%d",&m);
    int c[100];
    for(i=0;i<m;i++)
    {
        scanf("%d",&c[i]);
    }
    int j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[i]==b[j][0])
            {
                printf("%lld %d\n",a[j],b[j][1]);
                break;
            }
        }
    }
    return 0;
}