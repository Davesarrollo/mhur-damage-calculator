#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define MAX_CHARACTER 49

// Enums
enum quirkSkills {
    ALPHA,
    BETA,
    GAMMA
};

enum gestion {
    CHARGES,
    PERCENT,
    TIME
};

enum heroeVillano {
    HEROE,
    VILLANO
};

// Estructuras
typedef struct {
    char name[20];
    float damage[9];
    int hits[9];
} DamageComponent;

typedef struct{
    char *name;
    char *description;
} SpecialVariants;

typedef struct {
    char name[55];
    char *description;
    int typeGestion;
    float shotsOrPercentUsage[9];
    float reload[9];
    float fullReload[9];
    int countDamages;
    DamageComponent *components;
} QuirkVariant;

typedef struct {
    enum quirkSkills quirkSkill;
    int count;
    QuirkVariant *variants;
} QuirkGroup;

typedef struct {
    char name[25];
    QuirkGroup quirkGroup[3];
} QuirkSet;

typedef struct {
    char color[9];
    char name[10];
    char description[200];
    float multiplier[3];
} Afinity;

typedef struct {
    char name[50];
    char description[200];
    int countSpecials;
    SpecialVariants *specialVariant;
    float reloadSpecial;
    enum heroeVillano type;
} baseCharacter;

typedef struct {
    baseCharacter *base;
    Afinity *afinity;
    int hp;
    QuirkSet quirkSet;
} Character;

// Variables globales externas
extern Character characters[MAX_CHARACTER];
extern int numCharacters;

// Prototipos de funciones
int loadCharacters(Character *arr);
Character loadMidoriyaDefault();
Character loadMidoriyaFullBullet();
Character loadMidoriyaOFADefault();
Character loadBakugoDefault();
Character loadBakugoAmetralladora();
Character loadOchacoDefault();
Character loadOchacoZeroSatellites();
Character loadIidaDefault();
Character loadShotoDefault();
Character loadShotoFiloHelado();
Character loadTsuyuDefault();
Character loadKirishimaDefault();
Character loadKirishimaRedDrive();
Character loadMomoDefault();
Character loadDenkiDefault();
Character loadDenkiRelampago();
Character loadMonomaDefault();
Character loadKendoDefault();
Character loadKendoPalmasGemelas();
Character loadIbaraDefault();
Character loadMirioDefault();
Character loadMirioCizallas();
Character loadTamakiDefault();
Character loadNejireDefault();
Character loadShinsoDefault();
Character loadAllMightDefault();
Character loadAllMightAmetralladora();
Character loadBlindadoDefault();
Character loadAizawaDefault();
Character loadPresentDefault();
Character loadCementossDefault();
Character loadEndeavorDefault();
Character loadEndeavorIncandescente();
Character loadHawksDefault();
Character loadHawksCuchillada();
Character loadLadyDefault();
Character loadShigarakiDefault();
Character loadShigarakiCatastrofe();
Character loadAFODefault();
Character loadAFOYoungDefault();
Character loadDabiDefault();
Character loadDabiLlamas();
Character loadTogaDefault();
Character loadTogaBaile();
Character loadTwiceDefault();
Character loadCompressDefault();
Character loadKurogiriDefault();
Character loadOverhaulDefault();
// Agregar aquí otros prototipos de carga de personajes...

#endif