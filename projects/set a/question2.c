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
    int prkno;
    char spname[10];
};

int main (){
    FILE *fp;
    struct employee e[5];
    fp = fopen("emp.txt","r");
    for(int i = 0 ; i<=5;i++){
        fscanf(fp,"%ld  %s  %s  %ld  %s  %d  %s",&e[i].id, e[i].fname,e[i].lname,&e[i].phno,e[i].city, &e[i].prkno,e[i].spname);
    }
 
        printf("%ld %s  %s  %ld  %s  %d  %s",e[0].id, e[0].fname,e[0].lname,e[0].phno,e[0].city, e[0].prkno,e[0].spname);
    
    
    return 0;
}

