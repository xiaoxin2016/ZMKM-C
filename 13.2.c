//
//  main.c
//  13.2
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#define N 5
typedef struct student
{
    long sno;
    char name[10];
    float score[3];
} STU;


void fun(char *filename, STU n)
{ FILE *fp;
    /**********found**********/
    fp = fopen(filename, "rb+");
    /**********found**********/
    fseek(fp, -1L*sizeof(STU), SEEK_END);
    /**********found**********/
    fwrite(&n, sizeof(STU), 1,fp);
    fclose(fp);
}
/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

int main()
{
    STU t[N]={{10001,"MaChao", {91, 92, 77}},{10002,"CaoKai", {75, 60, 88}},{10003,"LiSi",{85, 70, 78}},{10004,"FangFang",{90, 82, 87}},{10005,"ZhangSan",{95, 80, 88}}};
    STU n={10006,"ZhaoSi",{55, 70, 68} },ss[N];
    int i,j; FILE *fp;
    fp = fopen("student.dat", "wb");
    fwrite(t, sizeof(STU), N, fp);
    fclose(fp);
    fp = fopen("student.dat", "rb");
    fread(ss, sizeof(STU), N, fp);
    fclose(fp);
    fun("student.dat", n);
    printf("The data after modifing :");
    fp = fopen("student.dat", "rb");
    fread(ss, sizeof(STU), N, fp);
    fclose(fp);
    for (j=0; j<N; j++)
    {
        printf("\nNo: %ld Name: %-8s Scores: ",ss[j].sno, ss[j].name);
        for (i=0; i<3; i++) printf("%.2f ", ss[j].score[i]);
    }
    printf("\n");
    return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
