
#include <stdio.h>
#include<ctype.h>

void uppercase(char s[]){
    
    for (int i = 0;i<strlen(s); i++) {
   if(s[i] >= 96 && s[i] <= 132) {
      s[i] = s[i] -32;
   }
  
}
     printf("%s",s);
}
int main(){
    char str[100];
    printf("inter your name - ");
    gets(str);
    uppercase(str);
    printf("%s",str);
    return 0;
    
    
}