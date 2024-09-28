#include <stdio.h>
#define PI 3.14159

int main() {
    float diameter = 15.0;
    float radius = diameter / 2.0;

    float volume = (4.0 / 3.0) * PI * (radius * radius * radius);

    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);

    return 0;
}

