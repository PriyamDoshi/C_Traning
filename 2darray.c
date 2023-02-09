#include <stdio.h>

int main()
{
    int num[3][3]={{1,0,-1},{2,3,0},{-1,-2,0}};
    int i,j,n,p,z;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(num[i][j]==0){
                z++;
            }else if(num[i][j]<0){
                n++;
            }else{
                p++;
            }
        }
    }
    
   printf("-ve number is %d\n",n);
   printf("+ve number is %d\n",p);
   printf("0 is %d\n",z);
   
    return 0;
}
