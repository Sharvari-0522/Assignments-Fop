// Smallest Common Divisor and GCD

#include <stdio.h>

int main(){
    int a,b,i,gcd=1,smallest=0;

    scanf("%d %d",&a,&b);

    for(i=2;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            if(smallest==0)
                smallest=i;
            gcd=i;
        }
    }

    printf("%d\n%d",smallest,gcd);

    return 0;
}
