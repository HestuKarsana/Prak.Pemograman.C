#include <stdio.h>

int main() {
	
	int nilai;
	printf("Input nilai matakuliah: ");
	scanf("%i", &nilai);
	
	if (nilai >= 85 && nilai <= 100){
		printf("\nLULUS");
		printf("\nGRADE A");
	}
	if (nilai >= 75 && nilai < 85){
		printf("\nLULUS");
		printf("\nGRADE B");
	}
	if (nilai >=60 && nilai < 75){
		printf("\nLULUS");
		printf("\nGRADE C");
	}
	if (nilai >= 45 && nilai < 60){
		printf("\nLULUS");
		printf("\nGRADE D");
	}
	if (nilai >= 0 && nilai < 45){
		printf("\nLULUS");
		printf("\nGRADE E");
	}
	
	if (nilai < 0 || nilai > 100){
		printf("\nInput nilai antara 0 - 100");
	}
	
	return 0;
}
