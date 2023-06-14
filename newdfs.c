#include <stdio.h>
int a[10][10];
int v[10];
void dfs(int s)
{
    v[s]=1;
    printf("%d->",s);
    for(int i=0;i<5;i++)
    {
        if(a[s][i]==1&&v[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
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
