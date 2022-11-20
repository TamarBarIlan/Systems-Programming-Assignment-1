#include <math.h>

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