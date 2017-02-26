//copy from the book
#include "stdio.h"
#define N 10
int main()
{
    int a[N+5][N+5],n,m,i,j,k,flag=0,max,t;
    scanf("%d%d",&n,&m);
    
    for(i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0; i<n; i++)
    {
        max=a[i][0];
        t=0;
        for (j=0; j<m; j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                t=j;
            }
        }
        
        for (k=0; k<m; k++)
        {
            if(a[k][t]<max)
            {
                break;
            }
        }

        if(k==n)
        {
            printf("a[%d][%d]=%d\n",i,t,max);
            flag=1;
            break;
        }
        
        
    }
    if(!flag)
        printf("Not Found\n");
    return 0;
}
