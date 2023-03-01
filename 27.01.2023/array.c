#include <stdio.h>

int main()
{
    char str[] = "aeiou";
    
    int l = sizeof(str)/sizeof(str[0]);
     char vov[l];
    for(int i = 0; i<=l; i++){
       vov[i] = str[i];
    }
    
    printf("%s\n",str);
    printf("%s",vov);
    return 0;
}