#include <stdio.h>

#define MAX 10

// Function to add two matrices
void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int sum[MAX][MAX];
    printf("\nAddition of matrices:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to find saddle point
void saddlePoint(int a[MAX][MAX], int r, int c) {
    int found = 0;
    for(int i=0;i<r;i++) {
        int min = a[i][0], col = 0;

        for(int j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        int isSaddle = 1;
        for(int k=0;k<r;k++) {
            if(a[k][col] > min) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("\nSaddle Point = %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("\nNo Saddle Point\n");
}

// Function to find inverse of 2x2 matrix
void inverseMatrix(float a[2][2]) {
    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("\nInverse not possible (Determinant = 0)\n");
        return;
    }

    printf("\nInverse Matrix:\n");
    printf("%.2f %.2f\n", a[1][1]/det, -a[0][1]/det);
    printf("%.2f %.2f\n", -a[1][0]/det, a[0][0]/det);
}

// Function to check magic square
void magicSquare(int a[MAX][MAX], int n) {
    int sum = 0, temp;

    for(int j=0;j<n;j++)
        sum += a[0][j];

    // Check rows
    for(int i=1;i<n;i++) {
        temp = 0;
        for(int j=0;j<n;j++)
            temp += a[i][j];
        if(temp != sum) {
            printf("\nNot a Magic Square\n");
            return;
        }
    }

    // Check columns
    for(int j=0;j<n;j++) {
        temp = 0;
        for(int i=0;i<n;i++)
            temp += a[i][j];
        if(temp != sum) {
            printf("\nNot a Magic Square\n");
            return;
        }
    }

    printf("\nIt is a Magic Square\n");
}

int main() {
    int choice, r, c, a[MAX][MAX], b[MAX][MAX];
    float inv[2][2];

    printf("===== MATRIX MENU =====\n");
    printf("1. Addition\n2. Saddle Point\n3. Inverse (2x2)\n4. Magic Square\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            printf("Enter Matrix A:\n");
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    scanf("%d", &a[i][j]);

            printf("Enter Matrix B:\n");
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    scanf("%d", &b[i][j]);

            addMatrix(a,b,r,c);
            break;

        case 2:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            printf("Enter Matrix:\n");
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    scanf("%d", &a[i][j]);

            saddlePoint(a,r,c);
            break;

        case 3:
            printf("Enter 2x2 Matrix:\n");
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    scanf("%f", &inv[i][j]);

            inverseMatrix(inv);
            break;

        case 4:
            printf("Enter size (n x n): ");
            scanf("%d", &r);

            printf("Enter Matrix:\n");
            for(int i=0;i<r;i++)
                for(int j=0;j<r;j++)
                    scanf("%d", &a[i][j]);

            magicSquare(a,r);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
