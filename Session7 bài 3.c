#include <stdio.h>

int main() {
    int arr[5] = {1,3,5,7,9};  
    int evenNumber = 0;  
    printf("Cac so chan trong mang la: \n");
    for(int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            evenNumber = 1;  
        }
    }
    
    if (evenNumber == 0) {
        printf("Mang khong chua so chan\n");
    }
    
    return 0;
}


