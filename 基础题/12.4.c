//
//  main.c
//  12.4
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

typedef struct
{
    int year;
    int mouth;
    int day;
}date;

typedef struct
{
    char name[11];
    date birthday;
    char sex;
    char phone[16];
    char cellphonep[16];
}info;

int main(int argc, const char * argv[]) {
    int n,i;
    scanf("%d",&n);
    info p[n];
    for (i=0;i<n;i++)
    {
        scanf("%s%d/%d/%d %c%s%s",p[i].name,&p[i].birthday.year,&p[i].birthday.mouth,&p[i].birthday.day,&p[i].sex,p[i].phone,p[i].cellphonep);
    }
    int num;
    scanf("%d",&num);
    while (num--)
    {
        int i;
        scanf("%d",&i);
        if (i>=n)
        {
            printf("Not Found\n");
        }
        else
        {
            printf("%s %s %s %c %d/%02d/%02d\n",p[i].name,p[i].phone,p[i].cellphonep,p[i].sex,p[i].birthday.year,p[i].birthday.mouth,p[i].birthday.day);
        }
    }
    return 0;
}
