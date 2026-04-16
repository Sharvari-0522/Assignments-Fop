//Program 1 (Addition)

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
    return 0;
}




//Program 2 (Subtraction)

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a-b);
    return 0;
}



//Program 3 (Multiplication)

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a*b);
    return 0;
}



//Program 4 (Division)

#include <stdio.h>

int main(){
    float a,b;
    scanf("%f %f",&a,&b);

    if(b!=0)
        printf("%.2f",a/b);
    else
        printf("Error");

    return 0;
}



//Program 5 (Power)

#include <stdio.h>

int main(){
    int x,y,i,p=1;
    scanf("%d %d",&x,&y);

    for(i=1;i<=y;i++)
        p*=x;

    printf("%d",p);

    return 0;
}



//Program 6 (Factorial)

#include <stdio.h>

int main(){
    int n,i,f=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        f*=i;

    printf("%d",f);

    return 0;
}




