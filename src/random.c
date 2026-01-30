#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "interfaz.h"

int mhuRandom(int valorSuperior);
// int formularioRandoms();
int randCharacter();
int randAfinnity();
int randLevel();

const char *afinnitis[5] = {"\x1b[93m Tanque \x1b[0m",
                            "\x1b[31m Agresivo \x1b[0m",
                            "\x1b[36m Dinamico \x1b[0m",
                            "\x1b[35m Tecnico \x1b[0m",
                            "\x1b[32m Protector \x1b[0m"};
const char *listRandomCharacters[] = {"\x1b[93m Izuku Midoriya\x1b[0m",
                            "\x1b[31m Izuku Midoriya(Full Bullet)\x1b[0m",
                            "\x1b[36m Izuku Midoriya OFA\x1b[0m",
                            "\x1b[31m Katsuki Bakugo\x1b[0m",
                            "\x1b[36m Katsuki Bakugo(Ametralladora)\x1b[0m",
                            "\x1b[36m Ochako Uraraka\x1b[0m",
                            "\x1b[93m Ochako Uraraka(Zero Satellites)\x1b[0m",
                            "\x1b[36m Tenia Iida\x1b[0m",
                            "\x1b[31m Shôto Todoroki\x1b[0m",
                            "\x1b[35m Shôto Todoroki(Filo helado y lanzallamas)\x1b[0m",
                            "\x1b[36m Tsuyu Asui\x1b[0m",
                            "\x1b[93m Eijirô Kirishima\x1b[0m",
                            "\x1b[31m Eijirô Kirishima(Red drive)\x1b[0m",
                            "\x1b[32m Momo Yaoyorozu\x1b[0m",
                            "\x1b[93m Fumikage Tokoyami\x1b[0m",
                            "\x1b[31m Denki Kaminari\x1b[0m",
                            "\x1b[35m Denki Kaminari(Relámpago)\x1b[0m",
                            "\x1b[35m Neito Monoma\x1b[0m",
                            "\x1b[93m Itzuka Kendo\x1b[0m",
                            "\x1b[31m Itzuka Kendo(Palmas gemelas)\x1b[0m",
                            "\x1b[32m Ibara Shiosaki\x1b[0m",
                            "\x1b[36m Mirio Tôgata\x1b[0m",
                            "\x1b[35m Mirio Tôgata(Contraataque de cizallas)\x1b[0m",
                            "\x1b[31m Tamaki Amakiki\x1b[0m",
                            "\x1b[35m Nejire Hadô\x1b[0m",
                            "\x1b[31m Hitoshi Shinso\x1b[0m",
                            "\x1b[93m All Might\x1b[0m",
                            "\x1b[36m All Might(Ametralladora)\x1b[0m",
                            "\x1b[35m All Might Blindado\x1b[0m",
                            "\x1b[35m Shôta Aizawa\x1b[0m",
                            "\x1b[31m Present Mic\x1b[0m",
                            "\x1b[32m Cementoss\x1b[0m",
                            "\x1b[31m Endeavor\x1b[0m",
                            "\x1b[93m Endeavor(Puño incadescente)\x1b[0m",
                            "\x1b[36m Hawks\x1b[0m",
                            "\x1b[31m Hawks(Cuchillada de Pluma)\x1b[0m",
                            "\x1b[93m Mount Lady\x1b[0m",
                            "\x1b[31m Tomura Shigaraki\x1b[0m",
                            "\x1b[93m Tomura Shigaraki(Catástrofe)\x1b[0m",
                            "\x1b[35m Tomura Shigaraki(Destrucción de las mil manos)\x1b[0m",
                            "\x1b[35m All For One\x1b[0m",
                            "\x1b[93m All For One<Youth Age>\x1b[0m",
                            "\x1b[35m Dabi\x1b[0m",
                            "\x1b[31m Dabi(Llamas de la locura)\x1b[0m",
                            "\x1b[35m Himiko Toga\x1b[0m",
                            "\x1b[36m Himiko Toga(Baile del aguijón)\x1b[0m",
                            "\x1b[36m Twice\x1b[0m",
                            "\x1b[32m Mr. Compress\x1b[0m",
                            "\x1b[32m Overhaul\x1b[0m",
                            "\x1b[31m Lady Nagant\x1b[0m",
                            "\x1b[32m Kurogiri\x1b[0m"};
const char *frases9[10] = {"No juegas, nomás respiras y te toca el 9 -_-",
                           "Felicidades, ya no necesitas manos.",
                           "Nivel 9... papá, estás tan roto que deberían banearte hasta del tutorial.",
                           "Mira nomás, 9... ¿Suerte o le pagaste al algoritmo?",
                           "Eso ya no es habilidad, es abuso.",
                           "Te salió el 9 y luego vas a presumir como si no fuera por suerte.",
                           "Nivel 9: haz lo que quieras, yo coopero.",
                           "Esto te convierte en caramelito con skin de tryhard.",
                           "Te salió el 9, bro... ‘No Skill Required’.",
                           "Te cayó el 9... ¿My hero ultra bugs a tu favor?."};
const char *frases1[10] = {"Nivel 1... ni el tutorial te respeta.",
                           "Te salió el 1, no pos... descanza en paz.",
                           "Nivel 1: bienvenido NPC.",
                           "No te tocó nivel, te tocó maldición. ¿Seguro que el juego no te odia?",
                           "El único poder que te da el nivel 1 es el de hacer reír.",
                           "No te preocupes... alguien tenía que ser la víctima en esta partida.",
                           "Nivel 1: cuando la suerte dice ‘hagamos esto interesante’.",
                           "El juego quiere humillarte, ¿lo vas a permitir?.",
                           "Bienvenido a modo leyenda.",
                           "¿Mala suerte o entrenamiento con peso?."
                        };

void random(){
    srand(time(NULL));
    system("clear");
    
    int colorResalte = rand() % 256;
    int anchoTerminal = tamanoTerminal();

    /*----------------------------imprime titulo----------------------------*/
    printf("\x1b[38;5;%dm", colorResalte);
    
    for (int i = 0; i < anchoTerminal; i++)
        printf("=");
    espacios(anchoTerminal/2 - 13);
    printf("Aleatorizador del Maijiro\n");
    for (int i = 0; i < anchoTerminal-1; i++)
        printf("=");
    printf("\x1b[0m\n");
    sleep(1);

    getchar();
    while (1){
        printf("\tPersonaje:%s\n", listRandomCharacters[randCharacter()]);
        printf("\tAfinidad: %s\n", afinnitis[randAfinnity() - 1]);
        int level = randLevel();
        printf("\tNivel:     %d", level);
        if (level==1){
            printf("\x1b[38;5;%dm\t\t%s", colorResalte, frases1[rand() % 10]);
        }
        if (level==9)
            printf("\x1b[38;5;%dm\t\t%s", colorResalte, frases9[rand() % 10]);

        // Leer la entrada del usuario
        putchar('\n');
        char input[16];
        fgets(input, sizeof(input), stdin);
            
        if (input[0] == '0')
            break;
        
        printf("\x1b[38;5;%dm", colorResalte);
        for (int i = 0; i < anchoTerminal-1; i++)
            printf("=");
        printf("\x1b[0m\n");
        
    }
    return;
}

int mhuRandom(int valorSuperior){
    return rand() % valorSuperior + 1;
}
int randCharacter(){
    return mhuRandom(sizeof(listRandomCharacters) / sizeof(listRandomCharacters[0])) - 1;
}
int randAfinnity(){
    return mhuRandom(5);
}
int randLevel(){
    return mhuRandom(9);
}
