#include "personajes.h"
#include "interfaz.h"
#include <stdio.h>
#include "stats.h"
#include "random.h"

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR "cls"
#else
    #include <sys/ioctl.h>
    #define CLEAR "clear"
#endif

int main() {
    system("chcp 65001");
    numCharacters = loadCharacters(characters);
    
    int opcion = 0;

    while (1){  
        system(CLEAR);
        int centrar = tamanoTerminal()/2-25;
        putchar('\n');
        espacios(centrar);printf("╔═════════════════════════════════════════════════╗\n");
        espacios(centrar);printf("║ ████    ████ ████   ████ ████  ████ █████████   ║\n");
        espacios(centrar);printf("║░░████  ████ ░░██   ░░██ ░░██  ░░██ ░░██░░░░░██  ║\n");
        espacios(centrar);printf("║ ░██░████░██  ░██    ░██  ░██   ░██  ░██    ░██  ║\n");
        espacios(centrar);printf("║ ░██░░██ ░██  ░█████████  ░██   ░██  ░████████   ║\n");
        espacios(centrar);printf("║ ░██ ░░  ░██  ░██░░░░░██  ░██   ░██  ░██░░░░░██  ║\n");
        espacios(centrar);printf("║ ░██     ░██  ░██    ░██  ░██   ░██  ░██    ░██  ║\n");
        espacios(centrar);printf("║ ████    ████ ████   ████ ░░██████   ████   ████ ║\n");
        espacios(centrar);printf("║░░░░    ░░░░ ░░░░  ░░░░░   ░░░░░░   ░░░░   ░░░░  ║\n");
        espacios(centrar);printf("║  ┌───────────────────────────────────────────┐  ║\n");
        espacios(centrar);printf("║  │    1. Estadísticas base            📊     │  ║\n");
        espacios(centrar);printf("║  ├───────────────────────────────────────────┤  ║\n");
        espacios(centrar);printf("║  │    2. Randomizador                 🎲     │  ║\n");
        espacios(centrar);printf("║  ├───────────────────────────────────────────┤  ║\n");
        espacios(centrar);printf("║  │    0. Salir del Programa           🚪     │  ║\n");
        espacios(centrar);printf("║  └───────────────────────────────────────────┘  ║\n");
        espacios(centrar);printf("╚═════════════════════════════════════════════════╝\n");
        printf("\nSelecciona una opción: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1: stats(); break;
            case 2: random(); break;
            case 0: printf("Saliendo del programa.\n"); break;
    
            default:
                printf("Opción no válida. Saliendo del programa.\n");
                break;
        }
        if (opcion == 0)
            break;
    }
    return 0;
}

