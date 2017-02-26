//
//  main.c
//  6.19
//
//  Created by Merck Liu on 2016/10/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //define&input
    int z1,m1,z2,m2;
    char fh;
    scanf("%d/%d%c%d/%d",&z1,&m1,&fh,&z2,&m2);
    int z,m;
    
    switch (fh) {
        case '+':
            m=m1*m2;
            z=m2*z1+m1*z2;
            break;
            
        case '-':
            m=m1*m2;
            z=m2*z1-m1*z2;
            break;
            
        case '*':
            m=m1*m2;
            z=z1*z2;
            break;
            
        case '/':
            z=m2*z1;
            m=z2*m1;
            break;
    }
     //辗转相除开始,求最大公约数
            int max,min;
            max=(z>m)?z:m;
            min=(z>m)?m:z;
            int temp;
            while (min!=0)
            {temp=max%min;
                max=min;
                min=temp;
            }
            
            printf("%d/%d%c%d/%d=%d/%d\n",z1,m1,fh,z2,m2,z/max,m/max);
            
   
    return 0;
}
