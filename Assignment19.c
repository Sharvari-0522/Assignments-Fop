// Employee Structure
#include <stdio.h>

struct emp{
    char name[50],desig[50],gender;
    float salary;
};

int main(){
    int n,i,male=0,female=0;
    struct emp e[50];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s %s %c %f",e[i].name,e[i].desig,&e[i].gender,&e[i].salary);

        if(e[i].gender=='M') male++;
        else female++;
    }

    printf("Total: %d\n",n);
    printf("Male: %d Female: %d\n",male,female);

    for(i=0;i<n;i++){
        if(e[i].salary>10000)
            printf("%s ",e[i].name);
    }

    return 0;
}
