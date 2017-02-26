#include<stdio.h>
#include<string.h>

int compare(char *a,char *b)
{
    int an,bn;
    an=strlen(a);
    bn=strlen(b);
    if(strcmp(a,b)==0)
        return 0;
    if(an>bn)
        return 1;
    else if(an==bn)
        return strcmp(a,b);
    else
        return -1;
}
int main()
{
    int f,n;
    int i,an,bn,k,result=0;
    char a[1000],b[1000];
    int af[1000]= {0},bf[1000]= {0},c[1000];
    while(scanf("%s%s",a,b)!=EOF)
    {
        an=strlen(a);
        bn=strlen(b);
        k=an>bn?an:bn;
        c[0]=0;
        f=0;
        n=compare(a,b);
        for(i=0; i<an; i++)
            af[i]=a[an-i-1]-'0';
        for(i=0; i<bn; i++)
            bf[i]=b[bn-i-1]-'0';
        for(i=0; i<k; i++)
        {
            if(n>=0)
            {
                if(af[i]>=bf[i])
                    c[i]=af[i]-bf[i];
                else
                    c[i]=af[i]-bf[i]+10,af[i+1]--;
            }
            else
            {
                if(bf[i]>=af[i])
                    c[i]=bf[i]-af[i];
                else
                    c[i]=bf[i]-af[i]+10,bf[i+1]--;
            }
        }
        if(n<0)
            printf("-");
        for(i=k-1; i>=0; i--)
        {
            if(c[i])
                f=1;
            if(f||i==0)
                printf("%d",c[i]);
        }
        printf("\n");
        for(i=0; i<k; i++)
            af[i]=bf[i]=0;
    }
}
