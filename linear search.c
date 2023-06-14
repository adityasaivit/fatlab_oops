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
    for(int j=1;j<=n;j++)
    {
        if(s==a[j-1])
        {
            printf("found");
        }
    }
}
