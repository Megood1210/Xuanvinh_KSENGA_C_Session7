#include <stdio.h>

int main() {
    int a,b;

    printf("Nhap so hàng cua mang: ");
    scanf("%d", &a);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &b);

    int arr[a][b];

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Nhap phan tu o vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMang da nhap là: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

