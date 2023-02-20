


#include <stdio.h>

void cercum(double *r,double *x ){
    *x = 3.14 * 2 * *r;
    }
void area(double *r,double *x){
    *x = 3.14 * *r * *r;
    }

void volume(double *r,double *x){
    *x = (3/4)*3.14* *r * *r * *r;
    }
int main()
{   
    double r;
    
    
    printf("inter redius :");
    scanf("%lf",&r);
    
    
    
    printf("for oppretion - \n 1 for cercumfrance.\n 2 for area.\n 3 for volume.\n ");
     
    int y;
    double x;
    
    scanf("%d",&y);
    printf("redius is %lf\n",r);
    
    switch(y) {
        case 1 :  cercum(&r,&x);
              
                  printf("cercumfrance of circle is %lf",x);
                  break;
        
        case 2 :  area(&r,&x);
                  printf("area of circle is %lf",x);
                  break;
                  
        case 3 :  volume(&r,&x);
                  printf("volume of sphere is %lf",x);
                  break;
                  
       
        
        default : printf("not a valid input");
        
        
    }
    

    return 0;
}