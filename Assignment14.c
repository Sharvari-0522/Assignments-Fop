// Binary to Decimal
#include <stdio.h>
#include <math.h>

int main(){
    int binary,n=0,i=0,r;

    scanf("%d",&binary);

    while(binary!=0){
        r=binary%10;
        n+=r*pow(2,i);
        binary/=10;
        i++;
    }

    printf("%d",n);

    return 0;
}
