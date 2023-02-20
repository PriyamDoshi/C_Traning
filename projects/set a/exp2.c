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
    for(int i =0 ; i<=2; i++)
    {
    fscanf(a,"%s %s %d", x[i].name , x[i].sname, &x[i].age );
    
    }
      for(int i=0; i<=2 ; i++){
        printf("%s %s %d \n", x[i].name, x[i].sname , x[i].age);
    }

  fclose(a);
}