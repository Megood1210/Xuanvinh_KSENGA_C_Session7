#include <stdio.h>

int main() {
    int number;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int arr[number];
    for (int i = 0; i < number; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang da nhap la: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


