#include <stdio.h>
int fact(int a){
    int f = 1;
    if(a==0){
        f = 1;
    }else{
    for(int i = 1; i<=a;i++){
        f *= i;
    }
    }
    return f;
}
int main()
{   int n,r;
    printf("inter n :");
    scanf("%d",&n);
    printf("inter r :");
    scanf("%d",&r);
    
    int c = fact(n)/(fact(r)*fact(n-r));
   printf("%d",c);
    return 0;
}