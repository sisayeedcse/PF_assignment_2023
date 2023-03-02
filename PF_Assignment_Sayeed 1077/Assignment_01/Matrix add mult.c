#include<stdio.h>
int main(){

int arrayA[50][50],arrayB[50][50],arrayC[50][50],arrayD[50][50];
int i, j, n=3;
// This loop is for ArrayA values input
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("For Matrix A element - [%d][%d]: ",i,j);
            scanf("%d",&arrayA[i][j]);
        }
    }
// This loop is for ArrayB values input
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("For Matrix B element - [%d][%d]: ",i,j);
            scanf("%d",&arrayB[i][j]);
        }
    }
    printf("\n");
    printf("This are Matrix A values: ");
// This loop is for arrayA value print
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d\t",arrayA[i][j]);
        }
    }
    printf("\n");
    printf("This are Matrix B values: ");
// This loop is for arrayB value print
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d\t",arrayB[i][j]);
        }
    }
    printf("\n");
// This loop is for Addition of both matrix
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
                arrayC[i][j]= arrayA[i][j] + arrayB[i][j];
        }
    }
// This loop is for Multiply of both matrix
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
                arrayD[i][j]= arrayA[i][j] * arrayB[i][j];
        }
    }
    printf("\n");
// This loop is for printing addition result
    printf("Matrix A + B result is: ");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d\t", arrayC[i][j]);
        }
    }
// This loop is for printing Multiply result
    printf("\n");
    printf("Matrix A * B result is: ");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d\t", arrayD[i][j]);
        }
    }
return 0;
}

