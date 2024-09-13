#include <stdio.h>
int main(){
    int sum=0;
    int array[]={1,2,3,4,5,6};
    for (int i = 0;i < 6 ;i++){
        sum += array[i];
    }
        printf("%d\n",sum);
    
}