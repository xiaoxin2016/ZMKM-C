//
//  main.c
//  13.3
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>    
    
    /**********found**********/
    void WriteText(FILE  *fw)
    {
        char str[81];
        gets(str);
        /**********found**********/
        while(strcmp(str,"-1")!=0)
        {
            /**********found**********/
            fputs(str,fw);  fputs("\n",fw);
            gets(str);
        }
    }
    void ReadText(FILE  *fr)
    {
        char  str[81];
        /**********found**********/
        fgets(str,81,fr);
        /**********found**********/
        while( !feof(fr) )
        {
            /**********found**********/
            printf("%s",str);
            fgets(str,81,fr);
        }
    }
    
}int main()
{
    FILE  *fp;
    if((fp=fopen("myfile4.txt","w"))==NULL)
    {  printf(" open fail!!\n"); exit(0);  }
    WriteText(fp);
    fclose(fp);
    if((fp=fopen("myfile4.txt","r"))==NULL)
    {  printf(" open fail!!\n"); exit(0);  }
    ReadText(fp);
    fclose(fp);
    return 0;
}

