// Sine Series
#include <stdio.h>

int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}

int main(){
    int n,i;
    float x,sum=0;

    scanf("%f %d",&x,&n);

    for(i=0;i<n;i++){
        int sign = (i%2==0)?1:-1;
        int power = 2*i+1;

        float term = sign;
        for(int j=1;j<=power;j++)
            term*=x;

        term /= fact(power);
        sum += term;
    }

    printf("%.6f",sum);

    return 0;
}
