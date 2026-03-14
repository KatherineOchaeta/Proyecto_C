#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;

    // Tasas de cambio aproximadas
    float quetzal_dolar = 0.13;
    float quetzal_euro = 0.12;
    float dolar_quetzal = 7.70;
    float euro_quetzal = 8.30;
    float dolar_euro = 0.92;
    float euro_dolar = 1.09;

    printf("=== CONVERSOR DE MONEDAS ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Dolares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * quetzal_dolar;
            printf("Resultado: %.2f Dolares\n", resultado);
            break;

        case 2:
            resultado = cantidad * quetzal_euro;
            printf("Resultado: %.2f Euros\n", resultado);
            break;

        case 3:
            resultado = cantidad * dolar_quetzal;
            printf("Resultado: %.2f Quetzales\n", resultado);
            break;

        case 4:
            resultado = cantidad * dolar_euro;
            printf("Resultado: %.2f Euros\n", resultado);
            break;

        case 5:
            resultado = cantidad * euro_quetzal;
            printf("Resultado: %.2f Quetzales\n", resultado);
            break;

        case 6:
            resultado = cantidad * euro_dolar;
            printf("Resultado: %.2f Dolares\n", resultado);
            break;

        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}