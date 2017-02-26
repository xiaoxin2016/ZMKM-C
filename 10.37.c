#include <stdio.h>
#include <string.h>

void main( ) {
    char a[1000], b[1000], c[1001] = {0}, flag = 0;  /*c:存放结果，flag:进位信息*/
    int i, j, k, m, n, len; /*i：跟踪a的下标，j：跟踪b的下标，k：跟踪c的下标*/
    scanf("%s%s", a, b);
    m = strlen(a);
    n = strlen(b);
    len = (m > n) ? m : n;
    /*相加时，先将右边对齐，即将i指向a的右端，j指向b的右端，
     然后i、j对齐，同步向左移动，直到其中一个到头为止*/
    for(i = m - 1, j = n - 1, k = len - 1; i >= 0 && j >= 0; i--, j--, k--)
    {
        c[k] = (a[i] - '0' + b[j] - '0' + flag) % 10 + '0';
        flag = (a[i] - '0' + b[j] - '0' + flag) / 10;
    }
    for(; i >= 0; i--, k--)  /*若a更长，即a没有处理完，处理a剩下的高位部分*/
    {
        c[k] = (a[i] - '0' + flag) % 10 + '0';
        flag = (a[i] - '0' + flag) / 10;
    }
    for(; j >= 0; j--, k--)  /*若b更长，则方法同上*/
    {
        c[k] = (b[j] - '0' + flag) % 10 + '0';
        flag = (b[j] - '0' + flag) / 10;
    }
    if(flag != 0) /*若最终的最高位进位信息不为0*/
    {
        for(k = len; k > 0; k--)
            c[k] = c[k - 1];
        c[0] = flag + '0';
    }
    printf("%s\n",c);
}
