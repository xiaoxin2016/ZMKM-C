//
//  main.c
//  10.32
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    for (int j=0; j<n; j++)
    {
        char s[150];
        int flag=0;
        scanf("%s",s);
        int count[26]={0};
        
        for (int i=0; i<strlen(s); i++)
        {
            count[s[i]-'a']++;
        }
        
        for (int i=0; i<strlen(s); i++)
        {
            if (count[s[i]-'a']==1)
            {
                printf("%c\n",s[i]);
                flag=1;
                break;
            }
        }
        
        if (flag==0)
            printf("NO\n");
    }
    

    
    return 0;
}
