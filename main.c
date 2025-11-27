#include "personajes.h"
#include "interfaz.h"
#include <stdio.h>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR "cls"
#else
    #include <sys/ioctl.h>
    #define CLEAR "clear"
#endif

int main() {
    int personajeSeleccionado = 0;
    system("chcp 65001");

    numCharacters = loadCharacters(characters);

    do {
        listCharacters();
        printf("\nEscribe el numero del personaje del cual quieras saber su información: ");
        scanf("%d", &personajeSeleccionado);

        while (personajeSeleccionado < 0 || personajeSeleccionado >= MAX_CHARACTER) {
            printf("%d no pertenece a ningun personaje \n", personajeSeleccionado);
            printf("Escribe el numero del personaje del cual quieras saber su información: ");
            scanf("%d", &personajeSeleccionado);
        }
        
        system(CLEAR);
        showCharacter(personajeSeleccionado - 1);
        showSpecial(personajeSeleccionado - 1);
        showQuirkSet(personajeSeleccionado - 1);
        pauseProgram();
        printf("\n\n");

    } while (personajeSeleccionado != 0);
    
    return 0;
}