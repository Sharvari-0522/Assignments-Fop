//Program 1 (Square)

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n*n);
    return 0;
}



//Program 2 (Cube)

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n*n*n);
    return 0;
}



//Program 3 (Square Root)

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%.2f",sqrt(n));
    return 0;
}



//Program 4 (Prime Check)

#include <stdio.h>
int main(){
    int n,i,flag=1;
    scanf("%d",&n);

    if(n<=1) flag=0;

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }

    if(flag) printf("Prime");
    else printf("Not Prime");

    return 0;
}



//Program 5 (Factorial)

#include <stdio.h>
int main(){
    int n,i,f=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        f*=i;

    printf("%d",f);

    return 0;
}



//Program 6 (Prime Factors)

#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        while(n%i==0){
            printf("%d ",i);
            n/=i;
        }
    }

    return 0;
}
