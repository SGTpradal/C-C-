#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Solicita o operador
    printf("Digite o operador (+, -, *, /): ");
    scanf("%c", &operador);

    // Solicita os n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    // Realiza a opera��o com base no operador
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro! Divis�o por zero.\n");
                return 1;
            }
            break;
        default:
            printf("Operador inv�lido!\n");
            return 1;
    }

    // Exibe o resultado
    printf("Resultado: %.2lf\n", resultado);

    return 0;
}

