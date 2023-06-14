#include <stdio.h>
#include <stdlib.h>
int a[10][10];
int v[10];
int n;
void dfs(int s)
{
    v[s]=1;
    printf("%d->",s);
    for(int i=0;i<n;i++)
    {
        if(a[s][i]==1&&v[i]==0)
        {
            
            dfs(i);
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);

        }
        printf("\n");
    }
    a[0][1]=1;
    a[0][3]=1;
    a[1][0]=1;
    
    a[1][2]=1;
    a[2][1]=1;
    a[2][4]=1;
    a[3][0]=1;
    a[4][2]=1;
    int src;
    scanf("%d",&src);
    dfs(src);
}
