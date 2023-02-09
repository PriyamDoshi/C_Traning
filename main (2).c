


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main ()
{
 char *art[5] = {"the", "a", "one","some","any"};
 char *noun[5] = {"boy","girl","dog","town","car"};
 char *varb[5] = {"drove","jumped","ran","walked","skipped"};
 char *pre[5] = {"to","from","over","under","on"};
srand(time(NULL));

 for(int i = 1; i <= 20 ; i++ ){
     
     char *s[100] ;
     
         s[0] = art[rand()%5];
     
      printf("%s %s %s %s %s %s. \n ",s[0],noun[rand()%5] ,varb[rand()%5],pre[rand()%5],art[rand()%5],noun[rand()%5] );
 }
 return 0;
}
