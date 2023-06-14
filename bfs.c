#include <stdio.h>
#include <stdlib.h>
int a[10][10];
int n=5;
int visited[10];
void dfs(int d)
{
    visited[d]=1;
    printf("%d->",d);
    for(int j=0;j<n;j++)
    {
        if(a[d][j]==1&&visited[j]==0)
        {
            dfs(j);
        }
    }

}
int main()
{
    int v;
    scanf("%d",&v);
    
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            a[i-1][j-1]=0;
            printf("%d ",a[i-1][j-1]);
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
    printf("\n\n\n");
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            //a[i-1][j-1]=0;
            printf("%d ",a[i-1][j-1]);
        }
        printf("\n");
    }
    printf("enter the source?:");
    int src;
    scanf("%d",&src);
    dfs(src);



}
