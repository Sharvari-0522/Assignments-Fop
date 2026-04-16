// String Menu
#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    int choice;

    scanf("%s %s",&a,&b);
    scanf("%d",&choice);

    switch(choice){
        case 1: printf("%lu",strlen(a)); break;
        case 2: strcpy(b,a); printf("%s",b); break;
        case 3: strcat(a,b); printf("%s",a); break;
        case 4:
            if(strcmp(a,b)==0) printf("Equal");
            else printf("Not Equal");
            break;
    }

    return 0;
}



