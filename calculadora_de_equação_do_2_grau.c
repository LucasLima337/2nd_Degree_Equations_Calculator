#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, d, x;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("\n");
    if(a != 0){
        d = (b * b) - 4 * a * c;
        printf("--------------------------------------------\n");
        printf("Equacao: %.0fx^2 + %.0fx + %.0f", a, b, c);
        printf("\n\n");
        if(d < 0){
            printf("Nao existe raiz real!\n\n");
            printf("DELTA = %.1f\n", d);
            printf("--------------------------------------------\n\n");
        }
        else{
            if(d == 0){
                x = -b / (2 * a);
                printf("Existe apenas uma raiz real!\n\n");
                printf("DELTA = %.1f\n", d);
                printf("X = %.1f\n", x);
                printf("--------------------------------------------\n\n");
            }
        }
    }
    return 0;
}
