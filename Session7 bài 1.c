#include<stdio.h>
int main(){
	int numbers[5] = {1,3,5,9};
	printf("Phan tu dau tien trong mang la %d\n",numbers[0]);
	printf("Phan tu thu hai trong mang la %d\n",numbers[1]);
	printf("Phan tu thu ba trong mang la %d\n",numbers[2]);
	printf("Phan tu thu tu trong mang la %d\n",numbers[3]);
	int numberssize = sizeof(numbers) / sizeof(int);
	printf("Do dai cua mang la %d",numberssize);
	
	return 0; 
}
