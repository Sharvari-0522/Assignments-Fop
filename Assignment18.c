// Length
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    printf("%lu",strlen(str));
    return 0;
}



// Reverse
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);

    strrev(str);

    printf("%s",str);
    return 0;
}



// Compare
#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);

    if(strcmp(a,b)==0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}



// Palindrome
#include <stdio.h>
#include <string.h>

int main(){
    char str[100],rev[100];
    scanf("%s",str);

    strcpy(rev,str);
    strrev(rev);

    if(strcmp(str,rev)==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}



// Substring
#include <stdio.h>
#include <string.h>

int main(){
    char str[100],sub[100];
    scanf("%s %s",str,sub);

    if(strstr(str,sub))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}



