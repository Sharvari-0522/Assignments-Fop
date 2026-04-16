// Swap without pointer
#include <stdio.h>

int main(){
    int a,b,temp;

    scanf("%d %d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("%d %d",a,b);

    return 0;
}



// Swap with pointer
#include <stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a,b;

    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("%d %d",a,b);

    return 0;
}



