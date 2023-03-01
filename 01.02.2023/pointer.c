#include<stdio.h>

int main ()
{
int a = 1;
int *ptr = &a;
int **p = &ptr;
printf(" %d \n" , a);
printf("%d \n" , *ptr);
printf("%d\n", **p);
return 0;
}
