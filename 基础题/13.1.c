//
//  main.c
//  13.1
//
//  Created by Merck Liu on 2016/11/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>




void fun(char *s, int a, double f)
{
    /**********found**********/
    FILE *fp;
    char ch;
    fp = fopen("file1.txt", "w");
    fprintf(fp, "%s %d %f\n", s, a, f);
    fclose(fp);
    fp = fopen("file1.txt", "r");
    ch = fgetc(fp);
    /**********found**********/
    while (!feof(fp)) {
        /**********found**********/
        putchar(ch); ch = fgetc(fp); }
    fclose(fp); 
}


/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

int main()
{
    char a[10];
    int b;
    double c;
    scanf("%s%d%lf",a,&b,&c);
    fun(a,b,c);
    return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
