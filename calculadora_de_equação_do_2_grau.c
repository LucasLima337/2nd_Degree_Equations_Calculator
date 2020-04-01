#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int e;
    while(e == 1){
        float a, b, c, d, x1, x2;
        printf("\nDigite o valor de a: ");
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
                    x1 = -b / (2 * a);
                    printf("Existe apenas uma raiz real!\n\n");
                    printf("DELTA = %.1f\n\n", d);
                    printf("X = %.1f\n", x1);
                    printf("--------------------------------------------\n\n");
                }
                else{
                    x1 = (-b + sqrt(d)) / (2 * a);
                    x2 = (-b - sqrt(d)) / (2 * a);
                    printf("Existem duas raizes reais!\n\n");
                    printf("DELTA = %.1f\n\n", d);
                    printf("X1 = %.1f\n", x1);
                    printf("X2 = %.1f\n", x2);
                    printf("--------------------------------------------\n\n");
                }
            }
        }
        else{
            printf("Nao e uma equacao do 2 Grau!\n\n");
        }
        printf("Digite 1 para calcular novamente ou 2 para encerrar: ");
        scanf("%d", &e);
        }
        if(e == 2){
            printf("\nPrograma finalizado com sucesso!\n\n");
            system("pause");
        }
        return 0;
    }
