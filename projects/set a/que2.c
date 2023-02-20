#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
    long id;
    char fname[10];
    char lname[10];
    long phno;
    char city[10];
    int pno;
    char sname[10];
};


int main(){
FILE *f;
int count = 1;
struct employee e1,e2,e3,e4,e5,e6;

f = fopen("emp.txt","r");




fread(&e1, sizeof(struct employee),1,f);
printf("%ld  , %s , %s , %ld , %s , %d , %s \n", e1.id, e1.fname, e1.lname, e1.phno, e1.city,e1.pno, e1.sname);
fread(&e2, sizeof(struct employee),1,f);
printf("%ld  , %s , %s , %ld , %s , %d , %s \n", e1.id, e1.fname, e1.lname, e1.phno, e1.city,e1.pno, e1.sname);
fread(&e3, sizeof(struct employee),1,f);
printf("%ld  , %s , %s , %ld , %s , %d , %s \n", e1.id, e1.fname, e1.lname, e1.phno, e1.city,e1.pno, e1.sname);
fread(&e4, sizeof(struct employee),1,f);
printf("%ld  , %s , %s , %ld , %s , %d , %s \n", e1.id, e1.fname, e1.lname, e1.phno, e1.city,e1.pno, e1.sname);
fread(&e5, sizeof(struct employee),1,f);
printf("%ld  , %s , %s , %ld , %s , %d , %s \n", e1.id, e1.fname, e1.lname, e1.phno, e1.city,e1.pno, e1.sname);
fread(&e6, sizeof(struct employee),1,f);
printf("%ld  , %s , %s , %ld , %s , %d , %s \n", e1.id, e1.fname, e1.lname, e1.phno, e1.city,e1.pno, e1.sname);

fclose(f);

f = fopen("emp.txt","r");

for(char c = getc(f); c!=EOF; c = getc(f))
{
    if(c == '\n'){
        count ++;
    }
}
printf("number of employee in file is %d \n",count);

return 0;
}