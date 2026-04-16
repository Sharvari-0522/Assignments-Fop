//Iterative method

#include <stdio.h>

int main() {
    int n, i, fact = 1;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
        fact *= i;

    printf("%d", fact);

    return 0;
}


//Recursive method

#include <stdio.h>

int fact(int n){
    if(n==0 || n==1)
        return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    scanf("%d",&n);

    printf("%d", fact(n));

    return 0;
}
