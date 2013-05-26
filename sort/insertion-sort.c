#include<stdio.h>
#define LENGHT		10
int main()
{
	int i;
	int j;
	int k;
	int z;
	int arrayToSort[LENGHT] = {9, 0, 5, 7, 8, 6, 3, 4, 1, 2};
	
	printf("Algorithm - Insertion sort\n\n");
	printf("Array to sort\n");
	
	for(z = 0; z < LENGHT; z++) {
		printf("%d\n", arrayToSort[z]);
	}
	
	for(j = 1; j < LENGHT; j++) {
		int key = arrayToSort[j];
		i = j - 1;
		while(i >= 0 && arrayToSort[i] > key) {
			arrayToSort[i + 1] = arrayToSort[i];
			i -= 1;
		}
		arrayToSort[i + 1] = key;
	}
	
	printf("\n");
	printf("Sorted array\n");
	
	for(k = 0; k < LENGHT; k++) {
		printf("%d\n", arrayToSort[k]);
	}
	return 0;
}