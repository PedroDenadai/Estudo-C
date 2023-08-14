#include <stdio.h>

int main(void) {
    int senha;
    printf("Insira uma senha (Somente numeros): ");
    scanf("%d", &senha);

    if (senha % 2 != 0 && senha % 17 != 0) {   
        printf("\nSenha forte\n");
    } else {
        printf("\nSenha fraca\n");
    }

    return 0;
}
