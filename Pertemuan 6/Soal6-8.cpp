#include "stdio.h" 
main(){
	int A[10] = {10,5,7,15,12,20,9,7,11,14};
	int N, I, flag = 0; 
	
	printf("Bilangan\n"); 
	
	for (I=0; I<10; I++)
		printf("%3i", A[I]); 
	printf("\n");
	printf("Input bilangan yang dicari: "); scanf("%i", &N);
	
	for (I=0; I<10; I++) { 
		if (A[I] == N) {
			flag = 1;
		}
	}
	
	if (flag == 1) {
		printf("Bilangan %i ADA ditemukan.", N);
	} else {
		printf("Bilangan %i TIDAK ditemukan.", N);
	}

	return 0;
}
