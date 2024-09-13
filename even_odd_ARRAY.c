#include <stdio.h>
int main(){
    int dulari[]={1,2,3,4,5};
    for(int i = 0 ; i < 5 ; i++){
        if (dulari[i] % 2== 0){
            printf("even elements:%d \n",dulari[i]);
        }
        else{
            printf("odd elements:%d \n",dulari[i]);
        }
    }

}