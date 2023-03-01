#include <stdio.h>

int main()
{
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    int e=0;
    int o=0;
    for(int i = 0; i<10;i++){
        if(num[i]%2 == 0){
            e++;
        }else{
            o++;
        }
    }
    printf("even number is %d\n",e);
    printf("odd number is %d",o);
    
    return 0;
}