#include <stdio.h>
int main(){
    int dulari[]={1,2,3,4,5};
    for(int i = 0 ; i < 5 ; i++){
        dulari[0]=7;
        printf("%d \n",dulari[i]);
    }

}