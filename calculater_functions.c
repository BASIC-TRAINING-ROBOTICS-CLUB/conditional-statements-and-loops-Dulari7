#include <stdio.h>

    int sum(int a , int b){
        return a + b ;
    }
    
    int sub(int a , int b){
        return a - b ;
    }

    int mul(int a , int b){
        return a * b ;
    }

    int dv(int a , int b){
        return a / b ;
    }
int main(){
    printf("sum of numbers:%d\n",sum(1,2));
    printf("subtraction of numbers:%d\n",sub(1,2));
    printf("multiplication of numbers:%d\n",mul(7,2));
    printf("division of numbers:%d\n",sum(4,2));
} 