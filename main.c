#include <stdio.h>
#include "NumClass.h"


/*The program will ask for 2 whole and positive numbers from the user.
The program will print to the screen 4 lines that will contain:
prime numbers, Armstrong number, strong number ang palindrome number between the 2 numbers.
*/

int main() {
int start, end;
scanf("%d", &start);
scanf("%d", &end);

printf("The Armstrong numbers are:");
for( int i = start; i<=end; i++){
   if(isArmstrong(i) == 1){
      printf(" %d", i);
   }
}
printf("\n");

printf("The Palindromes are:");
for( int i = start; i<=end; i++){
   if(isPalindrome(i) == 1){
      printf(" %d", i);
   }
}
 printf("\n");

printf("The Prime numbers are:");

for( int i = start; i<=end; i++){
   if(isPrime(i) == 1){
      printf(" %d", i);
   }
}
printf("\n");

printf("The Strong numbers are:");
for( int i = start; i<=end; i++){
   if(isStrong(i) == 1){
      printf(" %d", i);
   }
}

 return 0;

}