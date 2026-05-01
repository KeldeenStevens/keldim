#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variables globales
int saldo = 1000;
int pinCorrecto = 1234;
int intentos = 0;

// parte central del sistema 
void retirar();
void depositar();
void menu();



int main(void) {
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

void menu() {
    int opcion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Ver saldo\n");
        printf("2. Retirar dinero\n");
        printf("3. Depositar dinero\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Saldo actual: %d\n", saldo);
                break;

            case 2:
                retirar();
                break;

            case 3:
                depositar();
                break;

            case 4:
                printf("Gracias por usar el ATM\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while (opcion != 4);
}

void retirar() {
    int monto;

    printf("Monto a retirar: ");
    scanf("%d", &monto);

    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        printf("Retiro exitoso\n");
    } else {
        printf("Fondos insuficientes o monto invalido\n");
    }
}

void depositar() {
    int monto;

    printf("Monto a depositar: ");
    scanf("%d", &monto);

    if (monto > 0) {
        saldo += monto;
        printf("Deposito exitoso\n");
    } else {
        printf("Monto invalido\n");
    }
}