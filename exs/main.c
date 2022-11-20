#include <stdio.h>
#include "NumClass.h"


int main() {
printf("Enter two positive numbers\n");
int start, end;
if(scanf("%d%d", &start, &end) !=2){
   printf("Error plaese try again");
}

for( int i = start; i<=end; i++){
   if(isPrime(i) == 1){
      printf("%d, ", i);
   }
}
printf("\n");

for( int i = start; i<=end; i++){
   if(isArmstrong(i) == 1){
      printf("%d, ", i);
   }
}
printf("\n");

for( int i = start; i<=end; i++){
   if(isStrong(i) == 1){
      printf("%d, ", i);
   }
}
printf("\n");

for( int i = start; i<=end; i++){
   if(isPalindrome(i) == 1){
      printf("%d, ", i);
   }
}
 printf("\n");

 return 0;

}