#include<stdio.h>
#include<stdlib.h>

struct mail{
    char fromAddr[];
    char toAddr[];
    char subject[];
    char mailBody[];
    struct mail *ptr;
    
};

void storeinstruct(struct mail *a,  ){

}

int main(){
    struct mail *first;
    struct mail *second;
    struct mail *third;
    struct mail *fourth;
    struct mail *fifth;

    first = (struct mail*)malloc(sizeof(struct mail));
    second = (struct mail*)malloc(sizeof(struct mail));
    third= (struct mail*)malloc(sizeof(struct mail));
    fourth = (struct mail*)malloc(sizeof(struct mail));
    fifth= (struct mail*)malloc(sizeof(struct mail));

    FILE *e1, *e2, *e3, *e4, *e5;

    e1 = fopen("e1.txt" , "r");
    while( ){
        first->fromAddr =
    }

    while(){
         first->toAddr =
    }

    while (/* condition */)
    {
       first->subject = 
    }
    
    while (/* condition */)
    {
         first->mailBody = 
    }
    e2 = fopen("e2.txt" , "r");
    e3 = fopen("e3.txt" , "r");
    e4 = fopen("e4.txt" , "r");
    e5 = fopen("e5.txt" , "r");


   
}