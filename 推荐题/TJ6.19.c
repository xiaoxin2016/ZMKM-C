//
//  main.c
//  tj6.19
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

    
#include <stdio.h>
#include <stdlib.h>
    
    int main()
    
    {
        
        int A,B,C,D,E,F;
        
        for(A=0; A<=1; A++)
            
            for(B=0; B<=1; B++)
                
                for(C=0; C<=1; C++)
                    
                    for(D=0; D<=1; D++)
                        
                        for(E=0; E<=1; E++)
                            
                            for(F=0; F<=1; F++)
                                
                                if(A+B>=1&&A+E+F>=2&&A+D==1&&(B+C==0||B+C==2)&&C+D==1&&(D+E==0||D+E==2))
                                    
                                {
                                    
                                    if(A==1)
                                        
                                        printf("A:是罪犯\n");
                                    
                                    if(A==0)
                                        
                                        printf("A:不是罪犯\n");
                                    
                                    if(B==1)
                                        
                                        printf("B:是罪犯\n");
                                    
                                    if(B==0)
                                        
                                        printf("B:不是罪犯\n");
                                    
                                    if(C==1)
                                        
                                        printf("C:是罪犯\n");
                                    
                                    if(C==0)
                                        
                                        printf("C:不是罪犯\n");
                                    
                                    if(D==1)
                                        
                                        printf("D:是罪犯\n");
                                    
                                    if(D==0)
                                        
                                        printf("D:不是罪犯\n");
                                    
                                    if(E==1)
                                        
                                        printf("E:是罪犯\n");
                                    
                                    if(E==0)
                                        
                                        printf("E:不是罪犯\n");
                                    
                                    if(F==1)
                                        
                                        printf("F:是罪犯\n");
                                    
                                    if(F==0)
                                        
                                        printf("F:不是罪犯\n");
                                    
                                }
        
        return 0;
        
    }
