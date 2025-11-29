#include "interfaz.h"
#include <math.h>
#include <unistd.h>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR "cls"
#else
    #include <sys/ioctl.h>
    #define CLEAR "clear"
#endif

// Variables globales
Character characters[MAX_CHARACTER];
int numCharacters = 0;

void color(int c) {
    printf("\n %s", characters[c].afinity->color);
}

void uncolor() {
    printf("\x1b[0m");
}

void listCharacters() {
    system(CLEAR);
    for (int c = 0; c < MAX_CHARACTER-1; c++) {
        int saltoLinea = tamanoTerminal() / 24;


        printf("%2d ", c + 1);
        printf("%s", characters[c].afinity->color);
        printf("%-20s\x1b[0m\t", characters[c].base->name);
        if (((c + 1) % saltoLinea) == 0)
            putchar('\n');
    }
    putchar('\n');
}

void showCharacter(int c) {
    color(c);
   
    int espacios = ((tamanoTerminal()/2) - ((strlen(characters[c].base->name) + strlen(characters[c].quirkSet.name))/2));
    
    for (int j = 0; j < espacios ; j++)
        putchar(' ');

    printf("\033[1m");
    printf("%s", characters[c].base->name);
    if (strcmp(characters[c].quirkSet.name, "Default") != 0){
        printf(" (%s)", characters[c].quirkSet.name);
    }
    uncolor();
    printf("\n\t%s\n", characters[c].base->description);
    for (int j = 0; j < tamanoTerminal()-8 ; j++)
        putchar(' ');

    printf ("\033[92mPS:%d", characters[c].hp);
}

void showSpecial(int c) {
    printf("\n\033[34m");
    int espacios = tamanoTerminal()/2-9;
    for (int j = 0; j < espacios ; j++)
        printf("═");
    printf(" ACCIÓN  ESPECIAL ");
    for (int j = 0; j < espacios ; j++)
        printf("═");
    uncolor();
    
    for (int i = 0; i < characters[c].base->countSpecials; i++){
        color(c);
        printf("\n %s:", characters[c].base->specialVariant[i].name);
        uncolor();
        printf(" %s", characters[c].base->specialVariant[i].description);
    }
    
}

int tamanoTerminal() {
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columnas;

    if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        fprintf(stderr, "Error al obtener tamaño de consola\n");
        return 1;
    }

    columnas = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    return columnas;

#else
    struct winsize w;
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) == -1) {
        perror("ioctl");
        return 1;
    }
    return w.ws_col;
#endif
}

void showQuirkSet(int c) {
    int espacios = tamanoTerminal()/2-9;
    printf("\n\n\n\033[34m");
    for (int j = 0; j < espacios ; j++)
        printf("═");
    printf(" DONES ESPECIALES ");
    for (int j = 0; j < espacios ; j++)
        printf("═");
    putchar('\n');

    for (int i = 0; i < 3; i++) {
        showQuirkGroup(c, i);
    }
}

void espacios(int n) {
    for (int i = 0; i < n; i++)
        putchar(' '); 
}

void showQuirkGroup(int c, int quirkSkill) {
    QuirkGroup group = characters[c].quirkSet.quirkGroup[quirkSkill];

    for (int i = 0; i < group.count; i++) {
        QuirkVariant variant = group.variants[i];

        // Título del Quirk 
        color(c);
        printf("%s ", variant.name);
        int tamanoCadena = strlen(variant.name);
        for (int j = 0; j < tamanoTerminal() - tamanoCadena - 11; j++)
            printf("▰");

        switch (quirkSkill) {
            case ALPHA: printf(" α(Alpha)"); break;
            case BETA:  printf("▰ β(Beta)");  break;
            case GAMMA: printf(" γ(Gamma)"); break;
            default: printf(" (Desconocido)");
        }
        uncolor();

        printf("\n %s\n", variant.description);

         // Encabezado de tabla
         printf("\033[1m");
        if (variant.countDamages > 1){            //en caso de más de un daño
            printf("\n                 \tDaño:");
        }
        
        printf("\n Nivel ");
        switch (variant.typeGestion){
            case CHARGES: printf(" Tiros "); break;
            case PERCENT: printf(" Gasto "); break;
            case TIME:    printf(" Tiempo "); break;
        
        default:
            break;
        }
        printf(" Recarga ");

        for (int k = 0; k < variant.countDamages; k++) {  //imprime componentes de daño
            printf(" %s\t", variant.components[k].name);
        }
        uncolor();
        putchar('\n');

         // Cuerpo de la tabla 
        for (int lvl = 0; lvl < 9; lvl++) {
            printf("   %d   ", lvl + 1);                             // Nivel
            
            switch (variant.typeGestion){
                case CHARGES:printf("%4.0f   ",  variant.shotsOrPercentUsage[lvl]); break;
                case PERCENT:printf("%4.0f%%  ", variant.shotsOrPercentUsage[lvl]); break;
                case TIME:   printf("%6.1fs ",variant.shotsOrPercentUsage[lvl]); break;
            default:
                break;
            }

            printf("%6.2fs  ", variant.reload[lvl]);                 // Recarga
            
            for (int k = 0; k < variant.countDamages; k++) {         // Contador daños
                int tamanoEspacio = strlen(variant.components[k].name) / 2 - 1;
                float danoBase = variant.components[k].damage[lvl];
                int hits = variant.components[k].hits[lvl]; 
               
                if (hits == 0) hits = 1;                           //mientras inicializo hits
               
                float danoTotal = danoBase * hits;
                
                espacios(tamanoEspacio);
                printf("%3.0f", ceil(danoTotal));// daño(s)
                espacios(tamanoEspacio);
                
                putchar('\t');
            }
            putchar('\n');
        }
    }
}

void pauseProgram() {
    printf("\nEnter para mostrar otro personaje");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    getchar();
}