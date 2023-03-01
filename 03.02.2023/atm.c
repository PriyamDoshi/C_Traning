#include <stdio.h>

// structure for user entry
 struct userData{
    int pin;
    int accountNo;
};

int main() {
  //creating usears.
   struct userData d1;
   struct userData d2;
   struct userData d3;
   struct userData d4;
   
   d1.accountNo = 1111;
   d1.pin = 111;
   d2.accountNo = 2222;
   d2.pin = 222;
   d3.accountNo = 3333;
   d3.pin = 333;
   d4.accountNo = 4444;
   d4.pin = 444;
   
  int a;
  int p;
  
  printf("inter account number : ");
  scanf("%d",&a);
  printf("inter pin : ");
  scanf("%d",&p);
  // using swatch to find usears.
  
  switch (a){
      case 1111 : 
                 if(p==111){
                     printf("user no 1 ");
                 }
                 else {
                     printf(" wrong pin ");
                 }
                 break;
      case 2222 :if(p==222){
                     printf("user no 2 ");
                 }
                 else {
                     printf(" wrong pin ");
                 }
                 break;
      case 3333 :if(p==333){
                     printf("user no 3 ");
                 }
                 else {
                     printf(" wrong pin ");
                 }
                 break;
      case 4444 : if(p==444){
                     printf("user no 4 ");
                 }
                 else {
                     printf(" wrong pin ");
                 }
                 break;
      default : printf("not a valid usser");
  }
   
  
      

    return 0;
}