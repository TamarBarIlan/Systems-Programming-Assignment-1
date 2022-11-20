#include <math.h>

int reversNum(int num, int temp){
    if( num == 0){
        return temp;
    }
    temp = temp*10 + num%10;
    num = num/10;
    return  reversNum(num, temp);
}

int isPalindrome(int num){
    int result = reversNum(num , 0);
    if (num == result){
        return 1;   
    }
    return 0;
}
int numOfDigits( int num){
    if(num == 0){
        return 0;
    }
    return numOfDigits(num/10) + 1;
}

// int powOfDigits(int num, int saveNum, int numDigits){
//     if(num == 0){

//     }
// }


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