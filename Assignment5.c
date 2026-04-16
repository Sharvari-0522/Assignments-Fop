//Matrix Addition

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            sum[i][j] = a[i][j] + b[i][j];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}




//Saddle Point

#include <stdio.h>

int main() {
    int a[3][3], i, j;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++){
        int min = a[i][0], col = 0;

        for(j=1;j<3;j++){
            if(a[i][j] < min){
                min = a[i][j];
                col = j;
            }
        }

        int k;
        for(k=0;k<3;k++){
            if(a[k][col] > min)
                break;
        }

        if(k == 3)
            printf("%d", min);
    }

    return 0;
}




//Inverse Matrix

#include <stdio.h>

int main() {
    int a[2][2];
    float inv[2][2];
    int det;

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det != 0){
        inv[0][0] = a[1][1]/(float)det;
        inv[0][1] = -a[0][1]/(float)det;
        inv[1][0] = -a[1][0]/(float)det;
        inv[1][1] = a[0][0]/(float)det;

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                printf("%.2f ", inv[i][j]);
            printf("\n");
        }
    } else {
        printf("Not possible");
    }

    return 0;
}




//Magic Square

#include <stdio.h>

int main() {
    int a[3][3], i, j, sum = 0, flag = 1;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(j=0;j<3;j++)
        sum += a[0][j];

    for(i=1;i<3;i++){
        int row = 0;
        for(j=0;j<3;j++)
            row += a[i][j];
        if(row != sum)
            flag = 0;
    }

    for(j=0;j<3;j++){
        int col = 0;
        for(i=0;i<3;i++)
            col += a[i][j];
        if(col != sum)
            flag = 0;
    }

    int d1=0,d2=0;
    for(i=0;i<3;i++){
        d1 += a[i][i];
        d2 += a[i][2-i];
    }

    if(d1 != sum || d2 != sum)
        flag = 0;

    if(flag)
        printf("Magic Square");
    else
        printf("Not Magic");

    return 0;
}
