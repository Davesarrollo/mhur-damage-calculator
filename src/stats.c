#include <stdlib.h>
#include "stats.h"
#include "personajes.h"
#include "interfaz.h"

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR "cls"
#else
    #include <sys/ioctl.h>
    #define CLEAR "clear"
#endif

void stats(){    
    int personajeSeleccionado = 0;
    
    do {
        listCharacters();
        printf("\n 0 Salir al menú principal\n");
        printf("\nEscribe el numero del personaje del cual quieras saber su información: ");
        scanf("%d", &personajeSeleccionado);
        
        while (personajeSeleccionado < 0 || personajeSeleccionado >= MAX_CHARACTER) {
            printf("%d no pertenece a ningun personaje \n", personajeSeleccionado);
            printf("Escribe el numero del personaje del cual quieras saber su información: ");
            scanf("%d", &personajeSeleccionado);
        }
        
        system(CLEAR);

        if (personajeSeleccionado <= 0)
            return;

        showCharacter(personajeSeleccionado - 1);
        showSpecial(personajeSeleccionado - 1);
        showQuirkSet(personajeSeleccionado - 1);
        pauseProgram();
        printf("\n\n");
    } while (personajeSeleccionado != 0);
    return;
}