#include <math.h>

/*will return the number in revers*/
int reversNum(int num, int temp){
    if( num == 0){
        return temp;
    }
    temp = temp*10 + num%10;
    num = num/10;
    return  reversNum(num, temp);
}

/*will return if a number is a palindrome.
The function using recursion
*/
int isPalindrome(int num){
    int result = reversNum(num , 0);
    if (num == result){
        return 1;   
    }
    return 0;
}

/*will return the num of digist.*/
int numOfDigits( int num){
    if(num == 0){
        return 0;
    }
    return numOfDigits(num/10) + 1;
}

/*will return if a number is a Armstrong.
An Armstrong number is an n-digit numbe that is equal to the sum of the nth powers of its digits.
The function using recursion
*/
int isArmstrong(int num){
    int numDigits = numOfDigits(num);
    int copyNum = num;
    int result = 0;
    while( copyNum!= 0){
      result += pow(copyNum%10, numDigits);
      copyNum/=10;  
    }
    if (num == result){
        return 1;   
    }
    return 0;
}