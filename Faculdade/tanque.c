#include <stdio.h>

int main(void) {
    
    float l, a, p;
    float gasolina, alcool;
    printf("Largura do Tanque (em metros): ");
    scanf("%f", &l);
   
    printf("\nAltura do Tanque (em metros): ");
    scanf("%f", &a); 
   
    printf("\nProfundidade do Tanque (em metros): ");
    scanf("%f", &p);

    
    printf("\nPreco da gasolina (por litro): ");
    scanf("%f", &gasolina);

    printf("\nPreco do Alcool (por litro): ");
    scanf("%f", &alcool);


    printf("Tanque tem %.2f de largura, %.2f de altura e %.2f de profundidade.\n\n", l, a, p);

    float tanque = a * l * p;

    


    printf("\t\t\t\t-----------------RESULTADOS-----------------\n\n");

    printf("Volume do tanque: %.2f Litros\n", tanque);

    printf("Encher o tanque com GASOLINA: R$ %.2f\n", tanque * gasolina);
    printf("Encher o tanque com ALCOOL: R$ %.2f\n", tanque * alcool);



    
    
    
    
    return 0;
}