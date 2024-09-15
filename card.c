#include <stdio.h>
struct id{
    long long int El_no;
    float cpi;
    float spi;
};

int main(){
    struct id Dulari;
    Dulari.El_no=236400316224;
    Dulari.cpi=9.00;
    Dulari.spi=8.80;

    printf("%lld \n",Dulari.El_no);
    printf("%f\n",Dulari.cpi);
    printf("%f\n",Dulari.spi);

}