#include <stdio.h>

void transpose(int a[10][10], int r, int c) {
    int i, j, temp;
    for(i = 0; i < r; i++) {
        for(j = i+1; j < c; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

int main() {
    int a[10][10] = {{1,2,3},{4,5,6},{7,8,9}};
    int r = 3, c = 3;

    transpose(a, r, c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
