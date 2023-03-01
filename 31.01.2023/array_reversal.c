#include <stdio.h>

int main()
{
    int num[10];
    printf("inter 10 int dig - ");
    for(int i = 0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("input array is");
    for(int i = 0;i<10;i++){
       
        printf("%d,",num[i]);
    }
    
    printf("\nreverse array is");
    for(int i = 9;i>=0;i--){
        
        printf("%d,",num[i]);
    }
    
    
   
    return 0;
}