//
//  main.c
//  7.14
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

void move(char a,char b)
{
    printf("%c--->%c\n",a,b);
}
void hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        move(a,c);
    }
    else{
        hanoi(n-1,a,c,b);
        move(a,c);
        hanoi(n-1,b,a,c);
    }
}

int  main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
