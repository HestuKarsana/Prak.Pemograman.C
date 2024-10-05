#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan bilangan bulat positif: ");
    
    scanf("%d", &bilangan);
    if (bilangan % 2 == 0) {
        printf("Bilangan tersebut adalah GENAP.\n");
    } else {
        printf("Bilangan tersebut adalah GANJIL.\n");
    }

    return 0;
}

