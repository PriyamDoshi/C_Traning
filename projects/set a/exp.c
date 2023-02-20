#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct exp
{
   char name[10];
   char sname[10];
   int age; 
};

int main (){
    FILE *a;
    a = fopen("try.txt", "r");
    struct exp x[2];
    fread(x,sizeof(struct exp),3,a);
   
        printf("%s %s %d ", x[0].name, x[0].sname , x[0].age);
    





  fclose(a);
}