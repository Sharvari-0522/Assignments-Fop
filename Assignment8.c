//Result+Grade

#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5,total;
    float percent;

    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    total = m1+m2+m3+m4+m5;
    percent = total/5.0;

    if(m1<40 || m2<40 || m3<40 || m4<40 || m5<40)
        printf("FAIL");
    else{
        printf("PASS\n%.2f\n",percent);

        if(percent>=75) printf("Distinction");
        else if(percent>=60) printf("First Division");
        else if(percent>=50) printf("Second Division");
        else printf("Third Division");
    }

    return 0;
}
