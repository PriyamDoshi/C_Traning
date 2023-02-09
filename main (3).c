#include <stdio.h>
#include<string.h>

int main(){
    
    char *arr[3]= {"hijkjkdg","ice","ball"};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arr_size;i++){
        
        char *zz = arr[i];
        for(int k = 0;k<strlen(zz);k++){
            if(k == 0){
                printf("%c",zz[k]-32);
            }
            else{
                printf("%c",zz[k]);
            }
        }
        printf("\n");
    
    }
    
}
