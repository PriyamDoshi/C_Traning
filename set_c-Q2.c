

#include <stdio.h>

void add(double *a,double *b,double *x ){
    *x = *a + *b;
    }
void sub(double *a,double *b,double *x){
    *x = *b - *a;
    }

void mul(double *a,double *b,double *x){
    *x = *b * *a;
    }
void d(double *a,double *b,double *x){
    *x = *b/ *a;
}

int main()
{   
    double a;
    double b;
    
    printf("inter first numbers :");
    scanf("%lf",&a);
    
    printf("inter second number : ");
    scanf("%lf",&b);
    
    printf("for oppretion - \n 1 for add.\n 2 for sun.\n 3 for multiplication.\n 4 for div.\n ");
     
    int y;
    double x;
    
    scanf("%d",&y);
    
    switch(y) {
        case 1 :  add(&a,&b,&x);
                  printf("add of given numbers is %lf",x);
                  break;
        
        case 2 :  sub(&a,&b,&x);
                  printf("sub of given numbers is %lf",x);
                  break;
                  
        case 3 :  mul(&a,&b,&x);
                  printf("multiplication of given numbers is %lf",x);
                  break;
                  
        case 4 :  d(&a,&b,&x);
                  printf("division of given numbers is %lf",x);
                  break;
        
        default : printf("not a valid input");
        
        
    }
    

    return 0;
}
