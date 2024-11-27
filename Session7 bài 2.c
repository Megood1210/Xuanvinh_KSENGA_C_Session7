#include <stdio.h>

int main() {
    int arr[5];  
    printf("Nhap 5 phan tu \n");
    for(int i = 0; i < 5; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nMang vua nhap la: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

