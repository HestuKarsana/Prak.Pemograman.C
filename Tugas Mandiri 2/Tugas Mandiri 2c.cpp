#include <stdio.h>
#include <math.h> 

int main() {
    float alas = 4.0;   
    float tinggi = 5.0; 


    float sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));

    printf("Sisi miring segitiga siku-siku dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm\n", alas, tinggi, sisiMiring);

    return 0;
}

