#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main() {
    double A,B,C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double tri = 0.5 * A * C;
    double ci = pi * (C * C);
    double trap = 0.5 * ( A + B ) * C;
    double sq = B * B;
    double rect = A * B; 
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", ci);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", sq);
    printf("RETANGULO: %.3lf\n", rect);
    
    return 0;
}
