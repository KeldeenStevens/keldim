#include <stdio.h>
#include <stdlib.h>

// Variables globales
int saldo = 1000;
int pinCorrecto = 1234;
int intentos = 0;

// Prototipos
void menu();
void retirar();
void depositar();

int main() {
    int pin;

    printf("=== BIENVENIDO AL ATM ===\n");

    while (intentos < 3) {
        printf("Ingrese su PIN: ");
        scanf("%d", &pin);

        if (pin == pinCorrecto) {
            printf("Acceso concedido\n");
            menu();
            return 0;
        } else {
            printf("PIN incorrecto\n");
            intentos++;
        }
    }

    printf("Cuenta bloqueada\n");
    return 0;
}