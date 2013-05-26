#include<stdio.h>

int main() {
	int A[7] = {0,1,1,0,1,0,1};//53
	int B[7] = {0,1,0,0,0,1,1};//35
	int C[7] = {0,0,0,0,0,0,0};
	int i;
	int j;
	for(i = 6; i >= 0; i--) {
		int sum = A[i] + B[i] + C[i];
		C[i] = sum % 2;
		C[i - 1] = sum/2;
	}
	
	//88
	for(j = 0; j < 7; j++) {
		printf("%d", C[j]);
	}
	return 0;
}