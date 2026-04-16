#include <stdio.h>
#include <math.h>

int main() {
    int a[3][3], b[3][3], i, j, n;

    printf("Enter order of matrix (max 3): ");
    scanf("%d", &n);

    printf("Enter matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    // Matrix Addition
    printf("\nMatrix Addition:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    // Saddle Point
    printf("\nSaddle Point:\n");
    int found = 0;
    for(i=0;i<n;i++){
        int min = a[i][0], col = 0;
        for(j=1;j<n;j++){
            if(a[i][j] < min){
                min = a[i][j];
                col = j;
            }
        }
        int k;
        for(k=0;k<n;k++){
            if(a[k][col] > min)
                break;
        }
        if(k == n){
            printf("Saddle Point = %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("No Saddle Point\n");

    // Inverse (only for 2x2)
    if(n == 2){
        int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        if(det != 0){
            printf("\nInverse Matrix:\n");
            printf("%.2f %.2f\n", a[1][1]/(float)det, -a[0][1]/(float)det);
            printf("%.2f %.2f\n", -a[1][0]/(float)det, a[0][0]/(float)det);
        } else {
            printf("\nInverse not possible\n");
        }
    }

    // Magic Square
    int sum = 0, magic = 1;

    for(i=0;i<n;i++)
        sum += a[0][i];

    for(i=1;i<n;i++){
        int rowSum = 0;
        for(j=0;j<n;j++)
            rowSum += a[i][j];
        if(rowSum != sum)
            magic = 0;
    }

    for(j=0;j<n;j++){
        int colSum = 0;
        for(i=0;i<n;i++)
            colSum += a[i][j];
        if(colSum != sum)
            magic = 0;
    }

    int d1=0,d2=0;
    for(i=0;i<n;i++){
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        magic = 0;

    if(magic)
        printf("\nMagic Square\n");
    else
        printf("\nNot Magic Square\n");

    return 0;
}
