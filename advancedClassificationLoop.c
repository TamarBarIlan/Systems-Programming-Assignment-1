#include <math.h>

/*will return if a number is a palindrome*/
int isPalindrome(int num){
    int result = 0;
    int tempNum = num;
    while( tempNum != 0){
        result = result*10 + tempNum%10;
        tempNum/=10;
    }
    if( num == result){
        return 1;
    }
    return 0;
}

/*will return if a number is a Armstrong.
An Armstrong number is an n-digit numbe that is equal to the sum of the nth powers of its digits.
*/
int isArmstrong(int num){
    int tempNum = num;
    int count = 0;
    while(tempNum != 0){
        count++;
        tempNum/=10;
    }
    int sum = 0;
    tempNum = num;
    while(tempNum != 0){
        sum+= pow(tempNum%10 , count);
        tempNum/=10;
    }
    if(sum == num){
        return 1;
    }
    return 0;
}