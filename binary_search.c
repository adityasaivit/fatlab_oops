#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    int s;
    scanf("%d",&s);
    int f=0;
    int r=n-1;
    int m=(r+f)/2;
    while(1)
    {
        if(s>a[m])
        {
            f=m;
        }
        else if(s==a[m])
        {
            printf("found");
            break;
        }
        else
        {
            r=m;
        }
        m=(f+r)/2;
    }
}
