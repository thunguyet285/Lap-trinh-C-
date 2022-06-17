#include<stdio.h>

int main(void) {
    int i, j, k, n;
    float alpha, M[10][10], tem;
    printf("Size of M(nxn) matrix? ");
    scanf("%d", &n);
    printf("\nM entries?\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%f", &M[i][j]);
        }
    }
    printf("\nM is\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2f  ", M[i][j]);
        }
        printf("\n");
    }
//--------------

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j) {
                alpha = M[j][i]/M[i][i];
                for (k = 0; k < n+1; k++) {
                    M[j][k] += -alpha*M[i][k];
                }
            }
        }
    }
    printf("\nM (after Gauss-Jordan elimination) is\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2f  ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
