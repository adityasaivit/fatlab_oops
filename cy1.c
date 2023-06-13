#include <stdio.h>
int main()
{
    int p,n,nsum=0;
    int psum=0;
    int i=0;
    while(1)
    {
        scanf("%d",&i);
        if(i==-1)
        {
            break;

        }
        else if(i>0)
        {
            psum+=i;
            p++;
        }
        else if(i<0)
        {
            nsum+=i;
            n++;
        }
    }
    if(p>0)
    {
        printf("%d\n",psum);
    }
    if(n>0)
    {
        printf("%d",nsum);
    }
}
