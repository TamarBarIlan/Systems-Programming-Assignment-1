#include<math.h>

int isPrime(int num){
    if(num == 1){
        return 1;
    }
    int i;
    for(i = 2; i<num; i++){
        if(num % i == 0){
            return 0;
        }
    }    
    return 1;
}

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return factorial(num-1)*num;
}

int isStrong(int num){
    int tempNum = num;
    int sum = 0;
    int modolo = 0;
    while(tempNum != 0){
        modolo = tempNum%10;
        sum+= factorial(modolo);
        tempNum/=10;
    }
    if(sum == num){
        return 1;
    }
    return 0;

}



