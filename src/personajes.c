#include "personajes.h"

// Definición de afinidades
Afinity tanque = {
    "\x1b[93m",
    "Tanque",
    "Sube el poder defensivo de todos los miembros del equipo al unirse a él.", 
    {0.95, 0.9, 0.8}
};
Afinity agresivo = {
    "\x1b[31m",
    "Agresivo",
    "Sube el poder de ataque de todos los miembros del equipo al unirse a él.", {1.05, 1.1, 1.2}};
Afinity dinamico = {
    "\x1b[96m",
    "Dinamico",
    "Sube la velocidad de movimiento de todos los miembros del equipo al unirse a él.", {1.05, 1.1, 1.2}};
Afinity soporte = {
    "\x1b[32m",
    "Soporte",
    "Sube el efecto de los objetos de recuperación de todos los miembros del equipo al unirse a él.", {1.1, 1.25, 1.5}};
Afinity tecnico = {
    "\x1b[35m",
    "Tecnico",
    "Sube la velocidad de recarga de todos los miembros del equipo al unirse a él.", {1.1, 1.2, 1.3}};

// Definición de personajes base
baseCharacter izuku = {
    "Izuku Midoriya",
    "Su especialidad es la velocidad, tanto en combate como en rescates! ¡Superpoderoso!",
    1,
    (SpecialVariants[]){
        {"Cargar", "Carga a un compañero caído en la espalda.\n ▰ Si vuelves a apretar el botón, puedes revivir a tus aliados cargándolos sobre tu espalda."}
    },
    HEROE
};
baseCharacter izukuOFA = {
    "Izuku Midoriya OFA",
    "¡Es el Noveno Portador del One For All! ¡Acaba con el gran mal con el don que te fue confiado!",
    2,
    (SpecialVariants[]){
        {"Cortina de Humo", "Pulsa brevemente el botón para crear una cortina de humo en el lugar en el que te encuentres.\n ▰ La cortina de humo aparecerá ante ti y tus aliados."},
        {"Fa Jin","Mantén pulsado el botón para doblar y estirar el cuerpo y aumentar así  la capacidad de salto.\n ▰ Mantén pulsado el botón mientras te encuentras en este estado para cancelarlo."}
    },
    HEROE
};
baseCharacter bakugo = {
    "Katsuki Bakugô",
    "Domina el epicentro de todas las explosiones. ¡En todas direcciones! ",
    1,
    (SpecialVariants[]){
        "Velocidad explosiva",
        "Se desplaza a velocidad turbo en la dirección señalada.",
    },
    HEROE
};
baseCharacter ochaco = {
    "Ochako Uraraka",
    "¡Tiene la ventaja de poder flotar mientras usa las artes marciales de Gunhead! ",
    1,
    (SpecialVariants[]){
        "Gravedad cero",
        "Hace que ella misma o un aliado entre en estado de ingravidez durante un período de tiempo determinado.\n ▰ En este estado, la velocidad de caída se reduce y la altura del salto aumentará."
    },
    HEROE
};
baseCharacter iida = {
    "Tenya Iida",
    "¡Corre como un torpedo para adelantar a sus enemigos! ¡Recorre el escenario a una velocidad prodigiosa!",
    1,
    (SpecialVariants[]){
    "Cargar",
    "Carga a un compañero caído en la espalda. Si vuelves a apretar el botón, puedes revivir a tus aliados cargándolos sobre tu espalda."
    },
    HEROE
};
baseCharacter shoto = {
    "Shôto Todoroki",
    "¡Se defiende con el poder del hielo y ataca con el del fuego! Una combinación perfecta.",
    1,
    (SpecialVariants[]){
        "Ola de llamas",
        "Dispara llamas hacia delante que permanecerán en el suelo durante un tiempo.\n ▰ Estas llamas causarán daño y quemarán a los enemigos que entren en contacto con ellas."
    },
    HEROE
};
baseCharacter tsuyu = {
    "Tsuyu Asui",
    "Se camufla para pasar desapercibida y escapa del peligro a lengüetazos.",
    1,
    (SpecialVariants[]){
        "Caza activa",
        "Usa la lengua para atraer a los aliados moribundos y los reanima."
    },
    HEROE
};
baseCharacter kirishima = {
    "Eijirô Kirishima",
    "¡Endurece todo su cuerpo para una defensa total! ¡Suelta golpes típicos de un machote!",
    1,
    (SpecialVariants[]){
        "Endurecimiento",
        "Aumenta su defensa durante un período de tiempo determinado y no recula al recibir ataques."
    },
    HEROE
};
baseCharacter momo = {
    "Momo Yaoyoruzu",
    "¡Puede crear lo que sea excepto seres vivos! ¡Apoya a tus aliados con los objetos y las armas que genera!",
    1,
    (SpecialVariants[]){
        "Bolsa de la Suerte de Yaoyorozu",
        "Crea la Bolsa de la Suerte de Yaoyorozu, con la que se pueden obtener objetos.\n ▰ Cuando un aliado quede noqueado, uno de los objetos que se pueden crear será una tarjeta de resurrección."
    },
    HEROE
};
baseCharacter denki = {
    "Denki Kaminari",
    "¡Su don es la electricidad! ¡Electrocuta a los enemigos, con lo que puede controlar sus alrededores!" ,
    1,
    (SpecialVariants[]){
        "Electrificación",
        "Se envuelve en electricidad.\n ▰ Los enemigos alcanzados quedarán paralizados y no podrán moverse durante un período de tiempo determinado."
    },
    HEROE
};
baseCharacter monoma = {
    "Neito Monoma",
    "¡Un bocazas irritante capaz de copiar cualquier don y cambiar el devenir del combate!",
    2,
    (SpecialVariants[]){
        {"Cambio de habilidad","Podrás cambiar entre las habilidades de los dones especiales que hayas copiado."},
        {"Escáner","Mantén pulsado el botón para acercarte a los aliados que tengas más cerca y copiar todos sus dones especiales."}
    },
    HEROE
};
baseCharacter kendo = {
    "Itsuka Kendo",
    "¡Protege y ataca con sus manos agigantadas! ¡Una delegada de clase que reparte tortas como panes!",
    1,
    (SpecialVariants[]){
        "Gran puño de la suerte",
        "Puede cargar con un aliado en sus manos gigantes. Si vuelves a pulsar el botón, podrás lanzarlo en la dirección a la que apuntes."
    },
    HEROE
};
baseCharacter ibara = {
    "Ibara Shiosaki",
    "¡Maneja a su gusto su cabello de enredaderas! ¡Arrebata la libertad del rival con ataques a distancia con los que los ata!",
    1,
    (SpecialVariants[]){
        "Escudo de fe",
        "Reanima a un aliado envolviéndolo en espinas.\n ▰ Se podrá utilizar incluso cuando el aliado esté detrás de una pared. "
    },
    HEROE
};
baseCharacter mirio = {
    "Mirio Tôgata",
    "¡El joven héroe más cercano al número 1! ¡Sal de cualquier apuro con el don que te traspasaron!",
    1,
    (SpecialVariants[]){
        "Permeabilidad",
        "Se vuelve capaz de atravesar paredes y ataques enemigos.\n ▰ Cuando se usa el modo de puntería, se lanzará hacia el aliado más cercano."
    },
    HEROE
};
baseCharacter tamaki = {
    "Tamaki Amajiki",
    "¡Las posibilidades son ilimitadas! ¡Lucha con total libertad con sus habilidades únicas!",
    1,
    (SpecialVariants[]){
        "Wing Crow",
        "Da volteretas en el aire y golpea con patadas utilizando las garras mientras se eleva hacia el cielo."
    },
    HEROE
};
baseCharacter nejire = {
    "Nejire Hadô",
    "¡Su vitalidad infantil es su mejor arma! ¡Despliega todo el poder de Nejire con sus ondas de choque! ",
    1,
    (SpecialVariants[]){
        "Movimiento ondulatorio",
        "Hará una carrera en el aire en la dirección hacia la que se mueva.\n ▰ Si se pulsa el botón de saltar mientras se está en el aire, el personaje flotará."
    },
    HEROE
};
baseCharacter shinso = {
    "Hitoshi Shinso",
    "¡La estrella de la especialidad general que aspira a ser un héroe! ¡Neutraliza a tus enemigos con su don especial Control Mental! ",
    2,
    (SpecialVariants[]){
        {"Persona Chords","Ataque que lanza un grito hacia donde se apunta.\n ▰ Los enemigos alcanzados dejarán caer sus objetos y no podrán moverse durante un período de tiempo determinado."},
        {"Persona Command","Cuando se utiliza para detener el movimiento de un enemigo con una acción especial, se colocará un marcador en la dirección a la que se apunta, obligándolo a correr hacia ese punto."}
    },
    HEROE
};
baseCharacter allmight = {
    "All Might",
    "¡Puños de poder colosal! ¡Un símbolo de paz que doblega a los malvados!",
    2,
    (SpecialVariants[]){
        {"Cargar","Carga a un compañero caído en la espalda.\n ▰ Si vuelves a apretar el botón, puedes revivir a tus aliados cargándolos sobre tu espalda."},
        {"//Salto de altura","Puede saltar más alto"}
    },
    HEROE
};
baseCharacter blindado = {
    "All Might Blindado",
    "¡Vuelve el símbolo de la paz! ¡Supera sus límites gracias a la incorporación de los dones de los chicos de la clase 1-A!",
    2,
    (SpecialVariants[]){
        {"Propulsor: Uravity","Mantén pulsado el botón de salto para seguir subiendo.\n ▰ Si pulsas de nuevo el botón de saltar mientras estás en el aire, el personaje flotará."},
        {"Propulsor: Ingenium", "Esprinta en la dirección del movimiento.\n ▰ Si mantienes pulsado, aumentará la distancia del esprint.\n ▰ Se cancela si vuelves a pulsar o esquivas."}
    },
    HEROE
};
baseCharacter aizawa = {
    "Shôta Aizawa",
    "¡Sella los dones del rival y lo sujeta con sus cintas! ¡Machácalo con un golpe certero mientras se agita! ",
    1,
    (SpecialVariants[]){
        "Serpiente de cintas",
        "Manipula innumerables cintas como si fueran látigos.\n ▰ Mantén pulsado el botón para golpear continuamente a los enemigos y desviar sus proyectiles."
    },
    HEROE
};
baseCharacter present = {
    "Present Mic",
    "¡Por fin llega a su puesto en la mesa de comentaristas! ¡Eleva tu voz y deja que llegue a todas partes! ",
    1,
    (SpecialVariants[]){
        "Sonidos de radio",
        "Lanza una radio en la dirección a la que se apunte para colocar una radio.\n ▰ La radio disparará una onda de choque sónica a la dirección a la que apunte."
    },
    HEROE
};
baseCharacter cementoss = {
    "Cementoss",
    "¡Endurece el escenario con cemento! Sin duda una fortaleza que te protege de los enemigos.",
    1,
    (SpecialVariants[]){
        "Muro protector",
        "Construye un muro de cemento alrededor de un aliado moribundo para reanimarlo.\n ▰ Se podrá utilizar incluso cuando el aliado esté detrás de una pared."
    },
    HEROE
};
baseCharacter endeavor = {
    "Endeavor",
    "¡Lo abrasa todo con las llamas que envuelven su cuerpo! ¡Desata llamaradas rugientes contra quien se interpone en su camino!",
    2,
    (SpecialVariants[]){
        {"Vuelo","Vuela al usar el botón de esprintar.\n ▰ Mientras está en el aire, planea al usar el botón de saltar."},
        {"Salto de altura","Puede saltar más alto."}
    },
    HEROE
};
baseCharacter hawks ={
    "Hawks",
    "¡El hombre que mira hacia delante volando a velocidades de vértigo!",
    2,
    (SpecialVariants[]){
        {"Alas Rígidas - Transporte","Elige a un aliado y vuela con él.\n ▰ Pulsa de nuevo el botón para soltarlo.\n ▰ Pulsa el botón de salto para ascender y el botón de agacharse para descender.\n ▰ Los aliados transportados podrán utilizar algunas técnicas."},
        {"Vuelo","Vuela al usar el botón de esprintar mientras está en el aire.\n ▰ Si realizas la acción especial mientras vuela, acelerará batiendo las alas. "}
    },
    HEROE
};
baseCharacter lady = {
    "MountLady",
    "¡Te llevará por delante a tamaño gigante! Una mujer que suscita catástrofes a gran escala.",
    1,
    (SpecialVariants[]){
        "Gigantificación",
        "Crece hasta hacerse gigante y puede moverse y atacar.\n ▰ No se puede hacer gigante en un espacio reducido, volverá a su tamaño original si recibe varios ataques."
    },
    HEROE
};
baseCharacter shigaraki = {
    "Tomura Shigaraki",
    "El destructor por antonomasia. Desvanece todo lo que toca sin importarle nada.",
    1,
    (SpecialVariants[]){
        "Mano colapsadora",
        "Destruye un edificio de un solo golpe.\n ▰ Si golpea a un enemigo, reduce su defensa y le inflige daño."
    },
    VILLANO
};
baseCharacter afo = {
    "All For One",
    "Alguien con un carisma de pura maldad capaz de robarle los dones a los demás.\n ▰ Utiliza varios dones para abrumar a sus oponentes. ",
    1,
    (SpecialVariants[]){
        "Robo",
        "Asesta el golpe de gracia a un enemigo y le roba el don especial.\n ▰ Puedes cambiar con el don robado usando la acción especial."
    },
    HEROE
};
baseCharacter afoYoung ={
    "All For One (Young)",
    "El Emperador del Mal vuelve a su era dorada.\n ▰ Libera su potencial oculto y domina el campo de batalla con su don.",
    2,
    (SpecialVariants[]){
        {"Mandamiento volador","Vuela al usar el botón de esprintar."},
        {"Alabarda de vacío","Ataque que sella temporalmente las acciones especiales de los enemigos a los que impacta.\n ▰ Puede atravesar la pared e impactar a los enemigos que hay detrás de ella."}
    },
    VILLANO
};
baseCharacter dabi = {
    "Dabi",
    "¡Con sus abrumadoras llamas azules rodea a sus objetivos y no les deja escapatoria!",
    1,
    (SpecialVariants[]){
        "Llamas persistentes",
        "Revive mientras emite llamas por todo su cuerpo.\n ▰ Solo se puede utilizar cuando te han tumbado y estés dentro de una zona segura sin recibir daño."
    },
    VILLANO
};
baseCharacter toga = {
    "Himiko Toga",
    "Una chica con el don de transformarse chupando sangre.\n ▰ Muy hábil con los cuchillos.",
    1,
    (SpecialVariants[]){
        {"Chupasangres directo","Inyecta la jeringa en un enemigo caído y chupa su sangre."},
        {"Transformación","Puedes utilizar la sangre consumida para transformarte en el enemigo y usar sus técnicas.\n ▰ Podrás interrumpir la transformación en cualquier momento agachándote dos veces."}
    },
    VILLANO
};
baseCharacter twice = {
    "Twice",
    "¡Derrota a sus oponentes y toma sus medidas! ¡Es capaz de crear clones suyos o de sus enemigos con su don de copia!",
    1,
    (SpecialVariants[]){
        "Imitación descontrolada",
        "Asesta el golpe de gracia a un enemigo caído y crea un clon de él.\n ▰ El clon no desaparecerá hasta que sea derrotado o el enemigo clonado reviva."
    },
    VILLANO
};
baseCharacter compress = {
    "Mr. Compress",
    "Un mago que te sorprenderá con sus trucos y juegos de manos.",
    1,
    (SpecialVariants[]){
        "Resurrección mágica",
        "Comprime a tus aliados, haciendo que sus PS se recuperen poco a poco.\n ▰ Si un aliado comprimido está tumbado, podrás revivirlo si lo descomprimes."
    },
    VILLANO
};
baseCharacter kurogiri = {
    "Kurogiri",
    "Un mayordomo para los malos, tranquilo y sereno.\n ▰ Es capaz de conectar espacios y lanzar ataques sorpresas.",
    1,
    (SpecialVariants[]){
        "Retirada",
        "Transporta a un aliado caído hacia tu posición.\n ▰ Se puede utilizar en cualquier lugar en el que se encuentren tus aliados."
    },
    VILLANO
};
baseCharacter overhaul = {
    "Overhaul",
    "¡Es el jefe de la familia Shie Hassaikai! ¡Domina el terreno y derrota a tus enemigos con tu don versátil!",
    1,
    (SpecialVariants[]){
        {"Reparación","Recupera los PG y los PS de los aliados cercanos.\n ▰ Mantén presionado el botón para recuperar sus PG y PS."},
        {"Ruptura","Mueve los brazos para derribar a los enemigos cercanos.\n ▰ Se puede utilizar incluso mientras se recibe ataques enemigos. "}
    },
    VILLANO
};


// Implementación de funciones de carga de personajes
Character loadMidoriyaDefault() {                                       // Izuku Midoriya
    Character c;
    c.base = &izuku;
    c.afinity = &tanque;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 2;
    alpha->variants = malloc(sizeof(QuirkVariant) * 2);

    alpha->variants[0] = (QuirkVariant){
        "Delaware Smash Air Force",
        "Libera una onda de choque con un capirotazo.",
        CHARGES,
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    alpha->variants[0].components[0] = (DamageComponent){
        "Daño",
        {58, 60, 62, 66, 68, 70, 72, 74, 80},
        {1,1,1,1,1,1,1,1,1} 
        
    };

    alpha->variants[1] = (QuirkVariant){
        "Delaware Smash Air Force - Full Burst",
        "Al agacharse, gasta todas las balas restantes y libera una onda de choque más fuerte de largo alcance.",
        CHARGES,
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {7,7,7,7,7,7,7,7,7}
    };
    alpha->variants[1].countDamages = 1;
    alpha->variants[1].components = malloc(sizeof(DamageComponent) * 1);
    alpha->variants[1].components[0] = (DamageComponent){
        "Daño",
        {80, 82, 84, 86, 90, 92, 94, 96, 100},
        {1,1,1,1,1,1,1,1,1}
    };

    QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "St. Louis Smash",
        "Arremete dando una fuerte patada voladora hacia su objetivo.",
        CHARGES,
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .shotsOrPercentUsage = {8, 8, 8, 6, 6, 6, 6, 6, 4},
    };
    beta->variants[0].countDamages = 1; 
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    beta->variants[0].components[0] = (DamageComponent){
        "Daño",
        {120, 131, 142, 153, 158, 163, 168, 173, 180},
        {1,1,1,1,1,1,1,1,1}
    };

    QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Látigos negros",
        "Usa un látigo para capturar y atraer a los enemigos.\n ▰ Al usarlo en el aire, puedes desplazarse enganchándolo a las paredes o al suelo.",
        CHARGES,
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 2},
        .shotsOrPercentUsage = {12, 11, 10, 10, 9.5, 9, 8.5, 8, 10},
    };
    gamma->variants[0].countDamages = 0; // No inflige daño
    gamma->variants[0].components = NULL;

    return c;
}

Character loadMidoriyaFullBullet() {                      // Izuku Midoriya (Full Bullet)
    Character c;
    c.base = &izuku;
    c.afinity = &agresivo;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Full Bullet");


    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Delaware Smash Full Bullet",
        "Ataque poderoso en forma de capirotazo que dispara varias ondas de choque al mismo tiempo.\n ▰ Cuando se usa el modo de puntería, aumenta la precisión y el alcance del ataque.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 8, 8, 8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {11, 12, 13, 14, 15, 16, 17, 18, 19},
        .hits = {5,5,5,5,5,5,5,5,5}
    };
        
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Manchester Smash",
        "Ataque que crea una onda de choque al atacar hacia abajo con el talón.\n ▰ Se vuelve más poderoso si se utiliza desde un lugar más alto.",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 3},
        .reload = {8, 8, 8, 8, 8, 8, 8, 8, 8}};
    beta->variants[0].countDamages = 4;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 4);
    beta->variants[0].components[0] = (DamageComponent){
        .name = "Bajo",
        .damage = {90, 100, 110, 115, 120, 125, 130, 135, 140},
        .hits = {1,1,1,1,1,1,1,1,1}
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Medio",
        .damage = {100, 110, 120, 125, 130, 135, 140, 145, 150},
        .hits = {1,1,1,1,1,1,1,1,1}
    };

    beta->variants[0].components[2] = (DamageComponent){
        .name = "Alto",
        .damage = {110, 120, 130, 135, 140, 145, 150, 155, 160},
        .hits = {1,1,1,1,1,1,1,1,1}
    };

    beta->variants[0].components[3] = (DamageComponent){
        .name = "Enganche",
        .damage = {50,50,50,50,50,50,50,50,50},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Impacto terrestre",
        "Ataque que levanta el suelo con un pisotón fuerte.\n ▰ Mantén pulsado el botón para subir al terreno elevado y dar un gran salto.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {6, 6, 6, 6, 6, 6, 6, 6, 6}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {100, 105, 110, 115, 120, 125, 128, 131, 135},
        .hits = {1,1,1,1,1,1,1,1,1}
    };

    return c;
}

Character loadMidoriyaOFADefault() {                                // Izuku Midoriya OFA
    Character c;
    c.base = &izukuOFA;
    c.afinity = &dinamico;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);
    alpha->variants[0] = (QuirkVariant){
        "Delaware Smash - Air Blast (Terretre)",
        "Mueve el brazo con un movimiento amplio para generar una onda expansiva.\n ▰ En el aire, el daño producido será menor, pero la brecha defensiva se reducirá.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Suelo",
        .damage = {80, 82, 84, 85, 88, 91, 94, 97, 100},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Aire",
        .damage = {60, 64, 68, 70, 72, 74, 76, 78, 80},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 2;
    beta->variants = malloc(sizeof(QuirkVariant) * 2);

    beta->variants[0] = (QuirkVariant){
        "Detroit Smash (Impacto al 45%)",
        "Se lanza hacia el objetivo a gran velocidad y golpea con un puñetazo.\n ▰ Mantén pulsado el botón para lanzarte más lejos.\n ▰ Antes de abalanzarse hacia su objetivo, lanzará un ataque en área.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {9, 9, 9, 8, 8, 8, 8, 8, 7}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);
    
    beta->variants[0].components[0] = (DamageComponent){
        .name = "Carga",
        .damage = {14,15,16,18,19,20,21,22,23},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
    
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Embestida",
        .damage = {100, 105, 110, 115, 120, 125, 130, 135, 140},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
    
    beta->variants[1] = (QuirkVariant){
        "Detroit Smash Quíntuple",
        "Se puede activar volviendo a pulsar el botón o manteniéndolo pulsado mientras se está en modo Overdrive.\n ▰ Salta hacía arriba y se lanza en picado para realizar una combinación de 5 golpes que crearán una onda expansiva",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {9, 9, 9, 8, 8, 8, 8, 8, 7}};
    beta->variants[1].countDamages = 1;
    beta->variants[1].components = malloc(sizeof(DamageComponent) * 1);
    beta->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {32, 33, 34, 35, 36, 37, 38, 39, 40},
        .hits = {5,5,5,5,5,5,5,5,5}
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 2;
    gamma->variants = malloc(sizeof(QuirkVariant) * 2);
    gamma->variants[0] = (QuirkVariant){
        "Segunda transmisión",
        "Aumenta la velocidad de movimiento y la velocidad de ataque.\n ▰ Mientras el efecto se encuentre activo, pulsa de nuevo el botón para abalanzarte hacia la dirección de apuntado.\n ▰ Al golpear con un gancho desde el suelo en un ataque cuerpo a cuerpo, restaurarás la duración del efecto y aumentará la velocidad.\n ▰ Al golpear 3 veces, activarás el modo Overdrive.",
        .typeGestion = TIME,
        .shotsOrPercentUsage = {60, 70, 80, 90, 100, 110, 120, 130, 140},
        .reload = {20, 20, 20, 18, 18, 18, 18, 18, 16}
    };
    gamma->variants[0].countDamages = 0; // No inflige daño
    
    gamma->variants[1] = (QuirkVariant){
        "Detroit Smash Overdrive",
        "Se puede activar manteniendo pulsado el botón mientras se está en modo Overdrive.\n ▰ Se abalanza contra un enemigo cercano que se encuentre en la dirección hacia la que se apunte y asesta un golpe.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {30,30,30,30,30,30,30,30,30},
        .reload = {0}
    };
    gamma->variants[1].countDamages = 1;
    gamma->variants[1].components = malloc(sizeof(DamageComponent) * 1);
    gamma->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {133, 136, 139, 142, 145, 148, 151, 153, 155},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
    return c;
}

Character loadBakugoDefault() {                                         // Katsuki Bakugo
    Character c;
    c.base = &bakugo;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Disparo antiblindaje",
        "Ataque con explosiones concentradas en un solo punto.\n ▰ Atraviesa la pared e impacta a los enemigos que haya detrás de ella.",
        .shotsOrPercentUsage = {6, 6, 6, 8, 8, 8, 8, 8, 10},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {58, 60, 62, 66, 68, 70, 72, 74, 78}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Granadas improvisadas",
        "Lanza granadas improvisadas de sudor de nitroglicerina.\n ▰ Explotan pasados un tiempo o al impactar contra el suelo.",
        .shotsOrPercentUsage = {2, 2, 2, 3, 3, 3, 3, 3, 4},
        .reload = {6, 6, 6, 6, 6, 6, 6, 6, 6}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {75, 78, 81, 84, 85, 86, 87, 88, 90},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Impacto de obús",
        "Carga giratoria capaz de golpear repetidamente a un enemigo y lanzarlo por los aires con una explosión final.\n ▰ Mantén pulsado el botón para aumentar la distancia de la carga.",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 2},
        .reload = {10, 10, 10, 10, 10, 10, 10, 10, 8}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Giro(Máximo)",
        .damage = {5,5,5,5,5,5,5,5,5},
        .hits = {12,12,12,14,14,14,14,14,16}
    };
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Explosión",
        .damage = {120, 130, 140, 150, 155, 160, 165, 170, 180},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
    return c;
}

Character loadBakugoAmetralladora() {                   // Katsuki Bakugo (Ametralladora)
    Character c;
    c.base = &bakugo;
    c.afinity = &dinamico;
    c.hp = 250;
    strcpy(c.quirkSet.name, "Ametralladora");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Ametralladora antiblindaje",
        "Ataque que lanza varias ráfagas con ambas manos.\n ▰ Si está en el aire, el retroceso hará que retroceda un poco.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {2, 2, 2, 2, 2, 2, 2, 2, 2}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {18, 19, 20, 21, 22, 23, 24, 25, 26},
        .hits = {4,4,4,4,4,4,4,4,4}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Golpe metralla",
        "Ataque con el que se lanza hacia delante mientras lanza un bombardeo continuo hacia el suelo.\n ▰ Mantén pulsado el botón para aumentar la cantidad de bombas lanzadas.\n ▰ Puedes apuntar hacia la dirección deseada.",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {9, 9, 9, 8.5, 8.5, 8.5, 8.5, 8.5, 8}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {65, 66, 67, 69, 70, 71, 72, 73, 75}};
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Mina explosiva",
        "Ataque que libera una gran explosión a su alrededor y que hace que se eleve hacia arriba.\n ▰ Puedes cambiar la dirección del salto con los controles de movimiento.",
        .shotsOrPercentUsage = {1, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {9, 9, 9, 8, 8, 8, 8, 8, 7}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {110, 115, 120, 125, 130, 135, 140, 145, 155}};

    return c;
}

Character loadOchacoDefault() {                                         // Ochako Uraraka
    Character c;
    c.base = &ochaco;
    c.afinity = &dinamico;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Gancho astral",
        "Ataque que saca cables de los brazos.\n ▰ Si se usa en el aire, puede engancharse a los enemigos y demás obstáculos para moverse.",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {3, 3, 3, 2.5, 2.5, 2.5, 2.5, 2.5, 2}};

    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {60, 65, 70, 75, 77, 79, 81, 83, 85}};
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Home Run Cometa",
        "Hace girar los escombros que flotan por el aire y los lanza hacia su objetivo.\n ▰ Mantén pulsado el botón para girar los escombros y muévelos para cambiarlos de posición.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {22, 22, 22, 20, 20, 20, 20, 20, 19},
        .reload = {9, 9, 9, 8.5, 8.5, 8.5, 8.5, 8.5, 8}
    };

    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Girando",
        .damage = {35, 37, 39, 41, 42, 43, 44, 45, 47},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Lanzando",
        .damage = {50, 56, 62, 68, 70, 72, 74, 76, 80},
        .hits = {1,1,1,1,1,1,1,1,1}
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 2;
    gamma->variants = malloc(sizeof(QuirkVariant) * 2);

    gamma->variants[0] = (QuirkVariant){
        "Nebulosa",
        "Hace flotar a los enemigos y los escombros dentro del alcance del objetivo con su don especial.\n ▰ Si acierta a un enemigo, este se quedará flotando en el aire sin poder moverse durante un cierto período de tiempo.",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {6, 6, 6, 6, 6, 6, 6, 6, 6}};

    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {60, 65, 70, 75, 78, 81, 84, 87, 90}};

    gamma->variants[1] = (QuirkVariant){
        "Aguacero del Cometa",
        "Si vuelves a apretar el botón mientras hay escombros flotando, estos caerán de manera inmediata.",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {0}};

    gamma->variants[1].countDamages = 1;
    gamma->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {50, 55, 60, 65, 69, 73, 77, 81, 90}};

    return c;
}

Character loadOchacoZeroSatellites() {                // Ochako Uraraka (Zero Satellites)
    Character c;
    c.base = &ochaco;
    c.afinity = &tanque;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Zero Satellites");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 2;
    alpha->variants = malloc(sizeof(QuirkVariant) * 2);
    alpha->variants[0] = (QuirkVariant){
        "Noqueo del Cometa",
        "Ataque potente que lanza escombros.",
        .shotsOrPercentUsage = {5,5,5,6,6,6,6,6,6},
        .reload = {2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Bateo ",
        .damage = {117,122,127,132,137,142,157,152,157}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Escombro",
        .damage = {101,105,109,113,117,121,125,129,133}
    };

    alpha->variants[1] = (QuirkVariant){
        "Home Run Planetario",
        "Mantén pulsado el botón para utilizar una mayor cantidad de munición y atacar avanzando hacia delante.\n ▰ Los enemigos golpeados saldrán volando.",
        .shotsOrPercentUsage = {5,5,5,6,6,6,6,6,6},
        .reload = {2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5}};
    alpha->variants[1].countDamages = 1;
    alpha->variants[1].components = malloc(sizeof(DamageComponent) * 1);

 
        alpha->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {130,135,140,145,150,155,160,165,170}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Zero Satellites",
        "Ataque que utiliza los escombros que tiene adheridos a los cables para realizar un ataque frontal. Puedes controlar el ataque con tu movimiento.",
        .typeGestion = TIME,
        .shotsOrPercentUsage = {2,2,2,2.5,2.5,2.5,2.5,2.5,3},
        .reload = {6,6,6,6,6,6,6,6,6}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {24,25,26,26,27,28,28,29,30}
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 2;
    gamma->variants = malloc(sizeof(QuirkVariant) * 2);

    gamma->variants[0] = (QuirkVariant){
        "Pasarela Cometa",
        "Lanza escombros en línea recta hacia adelante con su don especial. \nAl acertar a un enemigo, este flotará y podrá moverse durante un período de tiempo determinado.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {6, 6, 6, 5.5, 5.5, 5.5, 5, 5, 5}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Flotar",
        .damage = {110,115,120,125,130,135,140,145,150}
    };
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Caida",
        .damage = {80,85,90,95,100,105,110,115,120}
    };

    gamma->variants[1] = (QuirkVariant){
        "Pasarela Cometa",
        "Lanza escombros en línea recta hacia adelante con su don especial. \nAl acertar a un enemigo, este flotará y podrá moverse durante un período de tiempo determinado.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {6, 6, 6, 5.5, 5.5, 5.5, 5, 5, 5}};
    gamma->variants[1].countDamages = 2;
    gamma->variants[1].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[1].components[0] = (DamageComponent){
        .name = "Flotar",
        .damage = {42,44,46,50,52,54,56,58,60}
    };
    gamma->variants[1].components[1] = (DamageComponent){
        .name = "Caida",
        .damage = {62,64,66,68,70,72,74,76,78}
    };

    return c;
}

Character loadIidaDefault() {                                               // Tenia Iida
    Character c;
    c.base = &iida;
    c.afinity = &dinamico;
    c.hp = 250;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Rueda de motor",
        "Ataque cuerpo a cuerpo con el que carga girando hacia delante.",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {2, 2, 2, 1.5, 1.5, 1.5, 1.5, 1.5, 1}
    };
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {40,42,44,48,50,52,54,56,60}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Impulso de pistón",
        "Ataque con el que patea horizontalmente a su enemigo mientras se acelera el motor.",
        .shotsOrPercentUsage = {2, 2, 2, 3, 3, 3, 3, 3, 4},
        .reload = {6, 6, 6, 6, 6, 6, 6, 6, 6}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);
    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {100,108,116,124,126,128,130,132,140},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Turbomotor",
        " Aumenta la velocidad de movimiento y de ataque y puede hacer una voltereta si se vuelve a pulsar el botón.\n ▰ Al acabar el efecto, se cala el motor y se reduce considerablemente la velocidad.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {100,100,100,100,100,100,100,100,100,},
        .reload = {15,15,15,13,13,13,13,13,11}
    };
    gamma->variants[0].countDamages = 0;

    return c;
}

Character loadShotoDefault() {                                          // Shôto Todoroki
    Character c;
    c.base = &shoto;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Devastación",
        "Lanza bolas de fuego con su mano izquierda que provocará el estado de combustión al enemigo al que alcance.",
        .shotsOrPercentUsage = {8,8,8,9,9,9,9,9,10},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {54, 59, 63, 68, 70, 72, 73, 75, 77}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Muro de hielo perforador",
        "Crea un carámbano gigante.\n ▰ Este servirá tanto para bloquear los ataques enemigos como para penetrar a través de los ataques tanto de aliados como de enemigos.",
        .shotsOrPercentUsage = {2, 2, 2, 3, 2, 2, 2, 2, 2},
        .reload = {14,14,14,12,12,12,12,12,10}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {130,138,146,154,161,168,175,182,200},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 2;
    gamma->variants = malloc(sizeof(QuirkVariant) * 2);

    gamma->variants[0] = (QuirkVariant){
        "Estalagmita de hielo",
        "Ataque de hielo con el que se desliza por el suelo. Los enemigos alcanzados quedarán congelados y no podrán moverse durante un cierto período de tiempo.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {5,5,5,4.5,4.5,4.5,4.5,4.5,4}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Camino",
        .damage = {26*3,27*3,28*3,31*3,32*3,33*3,34*3,35*3,40*3}
    };
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {100,110,120,130,135,140,145,150,160}
    };

        gamma->variants[1] = (QuirkVariant){
        "Puente de hielo",
        "Se desliza por el hielo a gran velocidad.\n ▰ Los enemigos golpeados acaban congelados.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {5,5,5,4.5,4.5,4.5,4.5,4.5,4}};
    gamma->variants[1].countDamages = 2;
    gamma->variants[1].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[1].components[0] = (DamageComponent){
        .name = "Camino",
        .damage = {26*3,27*3,28*3,31*3,32*3,33*3,34*3,35*3,40*3}
    };
    gamma->variants[1].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {100,110,120,130,135,140,145,150,160}
    };


    return c;
}

Character loadShotoFiloHelado() {           // Shôto Todoroki (Filo Helado y Lanzallamas)
    Character c;
    c.base = &shoto;
    c.afinity = &tecnico;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Filo Helado y Lanzallamas");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 2;
    alpha->variants = malloc(sizeof(QuirkVariant) * 2);

    alpha->variants[0] = (QuirkVariant){
        "Filo helado y lanzallamas",
        "Ataque que lanza una gran bola de fuego mientras libera una capa de hielo bajo sus pies.\n ▰ Los enemigos alcanzados por el hielo quedarán congelados y no podrán moverse durante un período de tiempo determinado.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 8, 8, 8},
        .reload = {2, 2, 2, 2, 2, 2, 2, 2, 2}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Fuego",
        .damage = {55,57,59,61,63,66,69,72,75}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Hielo",
        .damage = {30,30,30,30,30,30,30,30,30}
    };

     alpha->variants[1] = (QuirkVariant){
        "Rompedor de hielo y fuego",
        "En el modo de puntería, cuando se golpea el bloque de hielo generado por el don especial β, se creará una explosión.\n ▰ La explosión puede atravesar las paredes y, cuanto más grande sea el bloque de hielo, mayor será su alcance. (El daño depende del nivel del don especial β,)",
            .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 8, 8, 8},
            .reload = {2, 2, 2, 2, 2, 2, 2, 2, 2}
        };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Cascada de hielo rasgadora",
        "Ataque que crea un bloque de hielo enorme delante de él.\n ▰ El bloque de hielo puede atravesar paredes y golpear a los enemigos que estén detrás de ellas.",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {9, 9, 9, 8, 8, 8, 8, 8, 7}
    };
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Hielo ",
        .damage = {100,105,110,112,114,116,117,118,120},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Explosión",
        .damage = {125,130,135,140,145,150,155,160,170},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Prisión abrasadora",
        "Ataque que lanza un tornado de llamas hacia delante.\n ▰ Las llamas avanzarán, rebotando en las paredes y anulando los proyectiles enemigos.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {5,5,5,5,5,5,5,5,5}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Columna",
        .damage = {37,38,39,40,41,42,43,44,45}
    };

    gamma->variants[0].components[1] = (DamageComponent){
        .name = "llamita",
        .damage = {15,15,15,15,15,15,15,15,15}
    };

    return c;
}

Character loadTsuyuDefault() {                                             // Tsuiyu Asui
    Character c;
    c.base = &tsuyu;
    c.afinity = &dinamico;
    c.hp = 250;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Disparo rana",
        "Extiende la lengua para atacar al enemigo.\n ▰ Si se usa en el aire, puede engancharse a los enemigos y demás obstáculos para moverse.",
        .shotsOrPercentUsage = {3,3,3,3,3,3,3,3,3},
        .reload = {2,2,2,2,2,2,2,2,2}
    };
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {56, 60, 64, 68, 70, 72, 74, 75, 77}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Barrido de rana",
        "Ataque con la lengua que realiza un barrido de lado a lado.\n ▰ Si se usa en el aire, el ataque se convierte en un golpe vertical giratorio.",
        .shotsOrPercentUsage = {2, 2, 2, 3, 3, 3, 3, 3, 3},
        .reload = {2.5, 2.5, 2.5, 2, 2, 2, 2, 2, 1.5}
    };
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Suelo",
        .damage = {76, 81, 86, 91, 94, 96, 99, 102, 105},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Aire",
        .damage = {63, 68, 72, 77, 80, 82, 85, 88, 90},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Camuflaje de rana",
        "Hace invisible su cuerpo con colores de camuflaje.\n ▰ El camuflaje se desactivará al volver a pulsar el botón, al atacar o al recibir daño.",
        .shotsOrPercentUsage = {0},
        .reload = {17, 17, 17, 14, 14, 14, 14, 14, 11}
    };
    gamma->variants[0].countDamages = 0;
    
    return c;
}

Character loadKirishimaDefault() {                                    // Eijirô Kirishima
    Character c;
    c.base = &kirishima;
    c.afinity = &tanque;
    c.hp = 400;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Espada de furia",
        "Carga hacia delante mientras encadena varios cortes y acaba con un último tajo.",
        .shotsOrPercentUsage = {2, 2, 2, 3, 3, 3, 3, 3, 3},
        .reload = {6,6,6,6,6,6,6,6,6}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Cortes",
        .damage = {11,11,11,11,11,11,11,11,11}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {45,50,55,60,65,70,75,80,90}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Contraataque rojo",
        "Corre hacia delante embistiendo con todas sus fuerzas.",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {8, 8, 8, 7, 7, 7, 7, 7, 6}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {100, 105, 110, 120, 124, 128, 132, 136, 140},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Explosión roja",
        "Ataque con el que da un puñetazo contra el suelo y genera una onda expansiva.\n ▰ Mientras está en el aire, saltará y caerá en picado.",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {10, 10, 10, 9, 9, 9, 9, 9, 8}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {120, 125, 130, 140, 150, 160,  170, 180, 200}
    };

    return c;
}

Character loadKirishimaRedDrive() {                       // Eijirô Kirishima (Red Drive)
    Character c;
    c.base = &kirishima;
    c.afinity = &agresivo;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Red Drive");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Red Drive",
        "Ataque giratorio con el que se lanza hacia delante y golpea con un corte.\n ▰ Podrás saltar y correr por la pared mientras estás cargando el ataque y, si mantienes pulsado el botón, podrás seguir cargándolo.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {15,15,15,15,15,15,15,15,15},
        .reload = {.2, .2, .2, .19, .19, .19, .19, .19, .18}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Rueda",
        .damage = {38, 40, 42, 46, 48, 50, 52, 54, 57}
    };
    
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Final",
        .damage = {38, 40, 42, 46, 48, 50, 52, 54, 57}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Red Spirit",
        "Ataque con el que saca un escudo para bloquear los proyectiles y ataques enemigos.\n ▰ Después, golpeará con el brazo hacia abajo y creará una onda de choque.\n ▰ Si mantienes pulsado el botón, la onda de choque será más potente y se extenderá a una distancia mayor.\n ▰ Podrás correr con él mientras aún mantiene el escudo.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {49,49,49,43,43,43,43,43,41},
        .reload = {10,10,10,9,9,9,9,9,8}
    };
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {88,92,96,100,104,108,112,116},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Cargado",
        .damage = {120,124,128,132,136,140,144,148},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Red Strike",
        "Lanza rocas enormes hacia su objetivo.\n ▰ Estas rebotarán contra las paredes y el suelo y se romperán después de un período de tiempo determinado.",
        .shotsOrPercentUsage = {3,3,3,4,4,4,5,5,5},
        .reload = {4,4,4,4,4,4,4,4,4}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {86,88,90,94,96,98,100,102,112}};

    return c;
}

Character loadMomoDefault() {                                           // Momo Yaoyoruzu
    Character c;
    c.base = &momo;
    c.afinity = &soporte;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Creación - Lid acalorada",
        "Crea un arma contundente y ataca haciéndola girar para lanzar ondas de choque.\n ▰ Mantén pulsado el botón para atacar continuamente. ",
        .shotsOrPercentUsage = {6, 6, 6, 6, 6, 6, 6, 6, 6},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {44,46,48,50,52,54,56,58,60}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Creación - Muro invulnerable",
        "Crea un escudo y lo coloca en un punto determinado.\n ▰ Mantén pulsado el botón para sujetarlo con firmeza y embestir con él.\n ▰ El escudo desaparecerá tras recibir una cantidad determinada de daño o tras un período de tiempo determinado.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {12,12,12,10,10,10,10,10,8}
    };
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {100,105,110,120,125,130,135,140,150},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Creación - Tempestad de balas",
        "Crea un cañón y lo coloca en el suelo para disparar.\n ▰ Los proyectiles impactarán como un fuego artificial.",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 3},
        .reload = {7,7,7,7,7,7,7,7,7}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Cañon",
        .damage = {85,90,95,100,105,110,115,120,125}
    };
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Matrioska",
        .damage = {20,24,28,32,36,40,44,48,50}
    };

    return c;
}

Character loadDenkiDefault() {                                          // Denki Kaminari
    Character c;
    c.base = &denki;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Electrobjetivo",
        "Dispara un proyectil eléctrico que permanece en el sito durante un tiempo determinado.\n ▰ Cuando se usa con el modo puntería, su alcance aumenta ligeramente.\n ▰ Los proyectiles se conectarán por una corriente eléctrica y los enemigos que entren en contacto con ella quedarán paralizados.",
        .shotsOrPercentUsage = {7,7,7,8,8,8,8,8,9},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Disparo",
        .damage = {65,70,75,80,82,84,86,88,90}
    };
    
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Remanentes",
        .damage = {20,21,22,24,25,26,27,28,30}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Descarga indiscriminada de 1,3 millones de voltios",
        "Emite electricidad con un largo alcance que, además, puede golpear a los enemigos a través de las paredes. Si se mantiene pulsado el botón, seguirá descargando electricidad, pero, si se agota \nla técnica, quedará atontado.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {25,25,25,20,20,20,20,20,17},
        .reload = {11,11,11,10,10,10,10,10,9}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Esfera",
        .damage = {24,26.4,28.8,31.2,33.6,36,38.4,40.8,42},
    };


    beta->variants[0].components[1] = (DamageComponent){
        .name = "Expulsión",
        .damage = {10,11,12,14,15,16,17,18,20},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Pistola paralizante humana",
        "Avanza hacia su objetivo rodeado de electricidad.\n ▰ Los enemigos golpeados por este ataque quedarán paralizados.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {10, 10, 10, 9, 9, 9, 9, 9, 8}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Tacleo",
        .damage = {80,85,90,95,97,99,100,105,110}
    };

    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Carga",
        .damage = {10,12,14,16,18,20,22,24,25}
    };

    return c;
}

Character loadDenkiRelampago() {                            // Denki Kaminari (Relámpago)
    Character c;
    c.base = &denki;
    c.afinity = &tecnico;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Relámpago");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 2;
    alpha->variants = malloc(sizeof(QuirkVariant) * 2);

    alpha->variants[0] = (QuirkVariant){
        "Electrotridente",
        " Dispara balas eléctricas en forma de abanico.\n ▰ Si golpean a un enemigo varias veces, lo paralizarán.",
        .shotsOrPercentUsage = {7, 7, 7, 8, 8, 8, 8, 8, 9},
        .reload = {2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5}
    };
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {31,32,33,35,36,37,38,39,41}
    };


    alpha->variants[1] = (QuirkVariant){
        "Cerradura electrónica",
        "En el modo puntería, dispara balas que rastrean al enemigo fijado.\n ▰ La cantidad de balas aumentará cuanto más tiempo se fije al enemigo.\n ▰ El tiempo de carga de las balas se reducirá mientras se carga una acción especial.",
        .shotsOrPercentUsage = {7, 7, 7, 8, 8, 8, 8, 8, 9},
        .reload = {2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5}
    };
    alpha->variants[1].countDamages = 1;
    alpha->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {27,29,31,33,34,35,36,37,39}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Voltio rastreador",
        "Lanza numerosas trampas que siguen a los enemigos que se acerquen a ellas.\n ▰ Si un enemigo recibe algún impacto, su posición se volverá visible para ti y para tus aliados a través de las paredes.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {9.5,9.5,9.5,9,9,9,9,9,9}
    };
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Disparo",
        .damage = {10,10,10,10,10,10,10,10,10},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Mina",
        .damage = {20,21,22,24,25,26,27,28,23},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Camino relámpago",
        "Se lanza hacia delante y crea una explosión eléctrica a su alrededor.\n ▰ Cuantas más veces impacte, más daño hará.\n ▰ Mantén pulsado el botón para realizar dos cargas consecutivas.\n ▰ Al golpear a un enemigo con la carga, podrás lanzar dos más.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {9,9,9,8.5,8.5,8.5,8.5,8.5,8}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "(1ra)Carrera",
        .damage = {50,52,54,56,57,58,59,60,62}
    };
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Final(Base)",
        .damage = {17*3,18*3,19*3,20*3,21*3,22*3,23*3,24*3,25*3}
    };

    return c;
}

Character loadMonomaDefault() {                                           // Neito Monoma
    Character c;
    c.base = &monoma;
    c.afinity = &tecnico;
    c.hp = 250;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Copia: Puño Grande",
        "Agranda las manos utilizando el don de Itsuka Kendô y envía ondas de choque.\n ▰ Copia el don especial α del enemigo al que golpea.",
        .shotsOrPercentUsage = {20,21,22,24,25,26,27,28,30},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {10,10,10,12,12,12,12,12,14}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Copia: Rotación",
        "Gira los brazos a gran velocidad y carga hacia delante utilizando el don de Sen Kaibara.\n ▰ Copia el don especial β del enemigo al que golpea.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {6, 6, 6, 5, 5, 5, 5, 5, 4}
    };
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Golpe",
        .damage = {80,85,90,95,100,105,110,115,120},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Rodillazo",
        .damage = {60,60,60,60,60,60,60,60,60},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Copia: Acero",
        "Se envuelve en metal utilizando el don de Tetsutetsu Tetsutetsu y anula una vez el daño recibido.\n ▰ Copia el don especial γ del enemigo del que recibes el daño.\n ▰ Puedes liberarlo volviendo a pulsar el botón o atacando.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {0},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    gamma->variants[0].countDamages = 0;
    
    return c;
}

Character loadKendoDefault() {                                            // Itsuka Kendo
    Character c;
    c.base = &kendo;
    c.afinity = &tanque;
    c.hp = 400;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Puño lanzapiedras",
        "Lanza lejos una gran cantidad de rocas con su mano gigante.",
        .shotsOrPercentUsage = {6,6,6,7,7,7,7,7,8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {22*4,24*4,25*4,27*4,29*4,31*4,33*4,35*4,37*4}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Escudo del gran puño",
        "Técnica defensiva para protegerse de los ataques y desviar los proyectiles enemigos con su mano gigante.\n ▰ La protección se desvanecerá tras recibir cierta cantidad de daño.",
        .shotsOrPercentUsage = {600,625,650,700,725,750,775,800,850},
        .reload = {.1,.1,.1,.075,.075,.075,.075,.075,.05}
    };
    beta->variants[0].countDamages = 0;
    QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Puñetazo cate",
        " Ataque con el que se dirige hacia delante con fuerza y atrapa al enemigo con sus manos gigantes.",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 3},
        .reload = {2, 2, 2, 3, 3, 3, 3, 3, 3}
    };
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {130, 140, 150, 160, 164, 168, 172, 176, 180}};

    return c;
}

Character loadKendoPalmasGemelas() {                     // Itsuka Kendo (Palmas Gemelas)
    Character c;
    c.base = &kendo;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Palmas Gemelas");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Choque de viento feroz",
        "Dispara una onda de choque con sus manos gigantes capaz de atravesar a los enemigos.\n ▰ Mantén pulsado el botón para que la onda de choque sea más potente.",
        .shotsOrPercentUsage = {4,4,4,5,5,5,5,5,5},
        .reload = {1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {50,52,54,55,56,57,58,59,60}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Cargado",
        .damage = {80,82,84,85,88,91,94,97,100}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 2;
    beta->variants = malloc(sizeof(QuirkVariant) * 2);

    beta->variants[0] = (QuirkVariant){
        "Palmas gemelas",
        "Se lanza hacia delante y golpea con las dos manos gigantes a la vez.\n ▰ Cuanta más parte de la barra se utilice, mayor será el daño infligido.",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {10,10,10,10,10,10,10,10,10}
    };
    
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Minimo",
        .damage = {90,93,96,100,102,104,106,108,110},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {190,200,209,219,227,236,244,252,260},
    };

    beta->variants[1] = (QuirkVariant){
        "Espíritu indomable",
        "Mantén pulsado el botón para ponerte en guardia.\n ▰ Mientras estés en esa postura, reducirás el daño recibido y podrás desviar ataques cuerpo a cuerpo.\n ▰ Cuanto más ataques recibas o más tiempo pase, mayor será el consumo de las barras.",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {10,10,10,10,10,10,10,10,10}
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Puño torbellino",
        "Agranda las dos manos y se lanza hacia delante mientras gira.\n ▰ Mantén pulsado el botón para cargar el ataque y, cuando lo sueltes, se lanzará hacia delante para atacar",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Giro",
        .damage = {60,62,64,68,70,72,74,76,80}
    };
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {75,78,81,85,87,89,91,93,95}};

    return c;
}

Character loadIbaraDefault() {                                          // Ibara Shiosaki
    Character c;
    c.base = &ibara;
    c.afinity = &soporte;
    c.hp = 400;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Purificación",
        "Ataque en el que estira y expande su cabello de sarmientos.\n ▰ Cuando usa el modo de puntería, el cabello permanece unido, aumentando el alcance y la potencia del ataque.\n ▰ Este ataque es capaz de atravesar barreras y escudos enemigos.",
        .shotsOrPercentUsage = {2,2,2,3,3,3,3,3,4},
        .reload = {2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5}
    };
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {25*3,28*3,30*3,33*3,34*3,36*3,37*3,39*3,40*3}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Apuntando",
        .damage = {53*2,58*2,63*2,68*2,70*2,73*2,75*2,78*2,80*2}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Via Dolorosa",
        "Ataque en el que estira su cabello hacia delante.\n ▰ En espacios reducidos, se estira rebotando en los muros. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {5,5,5,4.5,4.5,4.5,4.5,4.5,4}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {42*2+40,44*2+43,46*2+46,50*2+40,52*2+40,58*2+54,62*2+56,66*2+58,76*2+60},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Crucifixión",
        "Ataque de hielo con el que se desliza por el suelo.\n ▰ Los enemigos alcanzados quedarán congelados y no podrán moverse durante un cierto período de tiempo.",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {1,1,1,1,1,1,1,1,1}
    };
    gamma->variants[0].countDamages = 3;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Continuo",
        .damage = {15,15,15,15,15,15,15,15,15}
    };
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {75,80,85,90,95,100,105,110,120
        }
    };
    gamma->variants[0].components[2] = (DamageComponent){
        .name = "Máximo",
        .damage = {150,155,160,180,185,190,195,200,225}
    };

    return c;
}

Character loadMirioDefault() {                                            // Mirio Tôgata
    Character c;
    c.base = &mirio;
    c.afinity = &dinamico;
    c.hp = 225;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 2;
    alpha->variants = malloc(sizeof(QuirkVariant) * 2);

    alpha->variants[0] = (QuirkVariant){
        "Rompeojos invisible",
        "Se trata de un ataque con el que se precipita hacia el objetivo.\n ▰ Cuando golpees a un enemigo, vuelve a ocultarte para poder realizar un combo de ataques.\n ▰ Si mantienes pulsado el botón, podrás atravesar elementos como las paredes. ",
        .shotsOrPercentUsage = {2,2,2,3,3,3,3,3,3},
        .reload = {3, 3, 3, 3, 3, 3, 3, 3, 3}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Patada",
        .damage = {35,37,39,40,41,42,43,44,45}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Pose",
        .damage = {65,65,65,65,65,65,65,65,65}
    };

    alpha->variants[0].components[2] = (DamageComponent){
        .name = "Combo",
        .damage = {35*3+65,37*3+65,39*3+65,40*3+65,41*3+65,42*3+65,43*3+65,44*3+65,45*3+65}
    };

     alpha->variants[1] = (QuirkVariant){
        "Phantom Menace",
        " Mantén pulsado el botón para atravesar paredes y barreras. ",
        .shotsOrPercentUsage = {2,2,2,3,3,3,3,3,3},
        .reload = {3, 3, 3, 3, 3, 3, 3, 3, 3}};
    alpha->variants[1].countDamages = 1;
    alpha->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {100,105,110,115,120,125,130,135,140}
    };


    
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Caída espectral",
        "Se sumerge en el suelo para luego impulsarse y golpear con un gancho.\n ▰ Mantén presionado el botón para moverte bajo tierra a la dirección en la que desees y descender por escaleras bajas.",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {10,10,10,9,9,9,9,9,9}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {120,125,130,140,145,150,155,160,170},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Guardia espectral",
        "Usa la capa para hacer volar a los enemigos y crea una barrera con la que podrá evitar sus ataques y desviar sus proyectiles.\n ▰ Mantén pulsado el botón para mantener activada la barrera.\n ▰ Serás vulnerable dentro de la barrera. ",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {36,36,36,36,36,36,36,36,36},
        .reload = {10, 10, 10, 10, 10, 10, 10, 10, 10}
    };
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {80,80,80,95,95,95,95,95,110}};

    return c;
}

Character loadMirioCizallas() {                // Mirio Tôgata (Contraataque de cizallas)
    Character c;
    c.base = &mirio;
    c.afinity = &tecnico;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Contraataque de cizallas");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Phantom Smash",
        "Golpea con el puño para lanzar ondas de choque.\n ▰ Mantén pulsado el botón para volverte transparente y, si te mueves, podrás ir más rápido.",
        .shotsOrPercentUsage = {8,8,8,10,10,10,10,10,12},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {40,41,42,43,44,45,46,47,48}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Phantom Rush",
        "Ataque con el que penetra en el suelo y se mueve mientras ataca continuamente.\n ▰ Mantén pulsado el botón para golpear continuamente. Luego, salta para salir y golpear el suelo.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {10,10,10,7,7,7,7,7,5},
        .reload = {13,13,13,12,12,12,12,12,10}};
    beta->variants[0].countDamages = 5;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 5);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Golpes",
        .damage = {3,3,3,3,3,3,3,3,3},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Upper",
        .damage = {1,1,1,1,1,1,1,1,1},
    };

    beta->variants[0].components[2] = (DamageComponent){
        .name = "Picada",
        .damage = {40,42,44,46,48,50,51,52,55},
    };
    
    beta->variants[0].components[3] = (DamageComponent){
        .name = "Onda",
        .damage = {30,32,34,36,38,40,41,42,45},
    };

    beta->variants[0].components[4] = (DamageComponent){
        .name = "Máximo",
        .damage =  {3*11+1+40+30,
                    3*11+1+42+32,
                    3*11+1+44+34,
                    3*15+1+46+36,
                    3*15+1+48+38,
                    3*15+1+50+40,
                    3*15+1+51+41,
                    3*15+1+52+42,
                    3*21+1+55+45},
    };


QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Contraataque de cizallas",
        "Ataque con el que se vuelve transparente y contraataca al recibir un golpe enemigo.\n ▰ El contraataque puede golpear al enemigo incluso si está al otro lado de la pared mientras este aparezca en la pantalla.\n ▰ No es eficaz contra ataques que no hagan daño o ataques que han sido colocados en el escenario.",
        .shotsOrPercentUsage = {1, 1, 1, 1,1,1,1,1,1},
        .reload = {3,3,3,2,2,2,2,2,1}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {125,135,145,160,170,180,195,205,220}};

    return c;
}

Character loadTamakiDefault() {                                         // Tamaki Amajiki
    Character c;
    c.base = &tamaki;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 2;
    alpha->variants = malloc(sizeof(QuirkVariant) * 2);

    alpha->variants[0] = (QuirkVariant){
        "Pez espada ropera",
        " Ataque con el que perfora utilizando un pez espada.\n ▰ Los golpes dados con la punta del pez harán más daño. ",
        .shotsOrPercentUsage = {5,5,5,6,6,6,6,6,7},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {65,68,71,73,75,77,79,81,85}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Punta",
        .damage = {105,108,111,115,118,121,124,127,130}
    };

    alpha->variants[1] = (QuirkVariant){
        "Látigo de pulpo",
        "En el modo de puntería, se pueden extender los tentáculos del pulpo para atraer a los enemigos. ",
        .shotsOrPercentUsage = {5,5,5,6,6,6,6,6,7},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[1].countDamages = 1;
    alpha->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {40,43,46,50,52,54,56,58,60}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Espejo de pulpo",
        "Ataque con el que lanza hacia delante y hace un barrido.\n ▰ Si golpea a un enemigo, activará su habilidad de mimetización de pulpo para esconderse.\n ▰ El camuflaje se desactivará después de un período de tiempo determinado o si utiliza una habilidad distinta a su don especial β. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {7, 7, 7, 6, 6, 6, 6, 6, 5}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {110,115,120,130,134,138,142,146,150},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Cañón de Plasma",
        "Lanza un rayo de calor de gran potencia.\n ▰ Mantén pulsado el botón para lanzarlo durante más tiempo y hacerlo más potente.\n ▰ Si utilizas el modo de puntería, podrás cambiar la dirección del rayo de calor y golpear a los enemigos a través de las paredes.\n ▰ Si recibes una técnica de Nejire Hadô como tu aliada mientras mantienes pulsado el botón, el ataque se cargará instantáneamente.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {100,100,100,100,100,100,100,100,100},
        .reload = {13, 13, 13, 13, 13, 13, 13, 13, 13}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {25*5,26*5,27*5,29*5,30*5,31*5,32*5,33*5,34*5}};

    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Cargado ",
        .damage = {34*5,35*5,36*5,37*5,38*5,39*5,40*5,41*5,42*5}};

    return c;
}

Character loadNejireDefault() {                                            // Nejire Hadô
    Character c;
    c.base = &nejire;
    c.afinity = &tecnico;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Gring Ring",
        "Dispara una serie de ondas de choque giratorias.",
        .shotsOrPercentUsage = {8,8,8,9,9,9,9,9,9},
        .reload = {2, 2, 2, 2, 2, 2, 2, 2, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {22*3,23*3,24*3,25*3,26*3,27*3,28*3,29*3,30*3}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Gring Wave",
        "Ataque que dispara una onda de choque giratoria con ambas manos.\n ▰ Si mantienes pulsado el ataque, seguirás disparando la onda.\n ▰ Puedes cambiar su dirección moviendo el cursor.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {10,10,10,10,10,10,10,10,10},
        .reload = {.2,.2,.2,.2,.2,.2,.2,.2,.2}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Golpe",
        .damage = {21,22,23,25,26,27,28,30,33},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {21*5,22*5,23*5,25*5,26*5,27*5,28*5,30*5,33*5},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Gring Surf",
        "Ataque que dispara una onda de choque giratoria desde las piernas.\n ▰ El retroceso hace que ascienda todavía más alta.\n ▰ Si mantienes pulsado el botón para cargar el ataque, la onda de choque se vuelve más amplia y ascenderá todavía más alto.",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 2},
        .reload = {10, 10, 10, 10, 10, 10, 10, 10, 8}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {100, 105, 110, 115, 118, 121, 124, 127, 130}};

    return c;
}

Character loadShinsoDefault() {                                         // Hitoshi Shinso
    Character c;
    c.base = &shinso;
    c.afinity = &agresivo;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Tela de restricción: Golpe descendente",
        "Ataque que contiene y aleja al enemigo extendiendo unas cintas.\n ▰ Pulsa el botón de nuevo mientras está atrapado para alejarlo rápidamente.",
        .shotsOrPercentUsage = {3,3,3,4,4,4,4,4,5},
        .reload = {2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Agarre",
        .damage = {25,26,27,30,31,32,33,34,35}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Azote",
        .damage = {30,33,36,40,42,44,46,48,50}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 2;
    beta->variants = malloc(sizeof(QuirkVariant) * 2);

    beta->variants[0] = (QuirkVariant){
        "Elevación con cintas",
        "Habilidad que te eleva en el aire; puedes controlar la dirección",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {7.5,7.5,7.5,7,7,7,7,7,6.5}};
    beta->variants[0].countDamages = 0;
    


    beta->variants[1] = (QuirkVariant){
        "Tela de restricción: Caos celestial",
        "Manten pulsado el boton para girar las telas y envolver al nemigo con ella\nMientras estés en el aire, atacará lanzándolo hacia el suelo",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {7.5,7.5,7.5,7,7,7,7,7,6.5}};
    beta->variants[1].countDamages = 1;
    beta->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {120,127,134,140,144,148,152,156,160},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Control mental",
        "Ataque que llama a los personajes que haya a tu alrededor y que hará que tus enemigos entren en estado de Control mental.\n ▰ En este estado, su velocidad de movimiento disminuirá y estarán tan confundidos que podrían atacar a sus propios aliados. ",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 2},
        .reload = {12, 12, 12, 12, 12, 12, 12, 12, 12}
    };
    gamma->variants[0].countDamages = 0;

    return c;
}

Character loadAllMightDefault() {                                            // All Might
    Character c;
    c.base = &allmight;
    c.afinity = &tanque;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Texas Smash",
        "Golpea con el puño para lanzar ondas de choque.\n ▰ Mantén pulsado el botón para atacar continuamente.",
        .shotsOrPercentUsage = {6, 6, 6, 8, 8, 8, 8, 8, 10},
        .reload = {1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Golpe",
        .damage = {58,60,62,64,66,68,70,72,73}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Onda",
        .damage = {20,20,20,20,20,20,20,20,20}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "United States of Smash",
        "Carga hacia delante y crea un tornado con un poderoso golpe.\n ▰ Se puede cambiar la trayectoria del tornado desde el suelo y, en el aire, se mueve en dirección hacia el objetivo. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {10,10,10,9,9,9,9,9,8}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Golpe",
        .damage = {40,45,50,55,58,61,64,67,70},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Remolino",
        .damage = {99,105,11,116,121,132,134,136,140},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Oklahoma Smash",
        "Ataque que hace que su cuerpo gire a toda velocidad, alejando a los enemigos que entran en contacto con él.\n ▰ Puede desviar los proyectiles y ataques enemigos mientras gira. ",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {46,46,46,39,39,39,39,39,33},
        .reload = {10, 10, 10, 9, 9, 9, 9, 9, 8}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {75,80,85,90,92,94,96,98,100}};

    return c;
}

Character loadAllMightAmetralladora() {                      // All Might (Ametralladora)
    Character c;
    c.base = &allmight;
    c.afinity = &dinamico;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Ametralladora");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Texas Smash - Ametralladora",
        "Dispara ondas de choque con golpes consecutivos.\n ▰ Mantén pulsado el botón para seguir disparando, haciendo que la velocidad de los golpes aumente con cada puñetazo.\n ▰ Mientras tienes pulsado el botón, el poder de defensa del personaje aumentará, haciendo que a los enemigos les cueste más derribarle.",
        .shotsOrPercentUsage = {28,28,28,32,32,32,32,3236},
        .reload = {.3,.3,.3,.3,.3,.3,.3,.3,.3}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {22,23,24,24,25,26,27,28,28}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Carolina Smash",
        "Ataque que lanza una gran onda de choque con un tajo cruzado.\n ▰ Mantén pulsado el botón para lanzarte hacia delante y golpear a los enemigos con ese tajo cruzado. ",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 4, 4, 4},
        .reload = {6, 6, 6, 6, 6, 6, 6, 6, 6}};
    beta->variants[0].countDamages = 3;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Proyectil X",
        .damage = {75,77,79,85,88,91,93,97,100},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Embestida",
        .damage = {10,10,10,10,10,10,10,10,10},
    };

    beta->variants[0].components[2] = (DamageComponent){
        .name = "X Final",
        .damage = {105,110,114,119,122,125,128,131,134},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Arizona Smash",
        "Salta hacia arriba y agarra al enemigo para, después, tirarse en picado.\n ▰ Puedes elegir el lugar en el que aterrizarás moviendo el cursor.",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {140,145,150,160,170,180,190,200,210}};

    return c;
}

Character loadBlindadoDefault() {                                   // All Might Blindado
    Character c;
    c.base = &blindado;
    c.afinity = &tecnico;
    c.hp = 400;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 2;
    alpha->variants = malloc(sizeof(QuirkVariant) * 2);

    // Ahora usas alpha en lugar de c.quirkSet.quirkGroup[ALPHA]
    alpha->variants[0] = (QuirkVariant){
        "Disparo: balas heladas",
        "Dispara balas heladas.\n ▰ Si golpean a un enemigo varias veces, lo paralizarán.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {15, 15, 15, 12, 12, 12, 12, 12, 10},
        .reload = {.25,.25,.25,.25,.25,.25,.25,.25,.25}
    };
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {30,31,32,33,34,35,36,37,38}
    };   
    
    alpha->variants[1] = (QuirkVariant){
        "Disparo: Balas ardientes",
        "Dispara balas ardientes mientras usas el modo apuntar.\n ▰ Inflige el estado de combustión a los enemigos a los que golpees.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {15, 15, 15, 12, 12, 12, 12, 12, 10},
        .reload = {.25,.25,.25,.25,.25,.25,.25,.25,.25}
    };
    alpha->variants[1].countDamages = 1;
    alpha->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {55,58,61,65,67,69,71,73,75}
    };


    QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];

    beta->quirkSkill = BETA;
    beta->count = 2;
    beta->variants = malloc(sizeof(QuirkVariant) * 2);

    beta->variants[0] = (QuirkVariant){
        "Látigo Negro: Chargezuma",
        "Ata a los enemigos con un cable de acero y los electrocuta.\n ▰ Puedes cancelar el agarre apretando el botón otra vez.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {60,60,60,60,60,60,60,60,40},
        .reload = {.4,.4,.4,.4,.4,.4,.4,.4,.4,}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {115,118,121,127,130,133,136,139,145},
    };

        beta->variants[1] = (QuirkVariant){
        "Látigo Negro: Cellophane",
        "Se lanza en picado desde el aire hacia donde haya impactado el cable de acero.\n ▰ Puede cancelar el movimiento pulzando el boton otra vez",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {60,60,60,60,60,60,60,60,40},
        .reload = {.4,.4,.4,.4,.4,.4,.4,.4,.4,}
    };
        beta->variants[1].countDamages = 1;
        beta->variants[1].components = malloc(sizeof(DamageComponent) * 1);

        beta->variants[1].components[0] = (DamageComponent){
            .name = "Daño",
            .damage = {35,37,39,43,45,47,49,51,55},
        };
    
    QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Dron: Anima",
        "Crea drones que te siguen.\n ▰ Estos desaparecerán con el tiempo.\n ▰ Pulsa de nuevo el botón para lanzar uno de ellos hacia la dirección donde estés apuntando o mantenlo pulsado para mandar a todas las unidades al mismo tiempo.\n ▰ Puedes lanzarlos aunque te estén atacando o haces otras acciones.\n ▰ Los drones se encargarán de rastrear y aturdir a los enemigos.\n ▰ Si te termina la carga, se dispararán automáticamente.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {100, 100, 100, 100, 100, 100, 100, 100, 100},
        .reload = {10, 10, 10, 9, 9, 9, 9, 9, 8}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {25,25,25,25,25,25,25,25,25}
    };

    return c;
}

Character loadAizawaDefault() {                                           // Shôta Aizawa
    Character c;
    c.base = &aizawa;
    c.afinity = &tecnico;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Captura con cintas",
        "Ataque que atrapa a los enemigos extendiendo unas cintas y los atrae hacia sí mismo.\n ▰ Pulsa de nuevo el botón para atraerlos.\n ▰ Mientras está en el aire, lanza una patada voladora hacia el lugar donde se golpeó con las cintas. ",
        .shotsOrPercentUsage = {3,3,3,4,4,4,4,4,5},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 3;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Cinta",
        .damage = {30,30,30,30,30,30,30,30,30}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Patada",
        .damage = {80,85,90,100,105,110,115,120,130}
    };

    alpha->variants[0].components[2] = (DamageComponent){
        .name = "Onda",
        .damage = {25,27,29,31,33,35,37,39,40}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Patadas voladoras",
        "Arremete hacia el objetivo lanzando una serie de patadas.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {5, 5, 5, 4, 4, 4, 4, 4, 3}};
    beta->variants[0].countDamages = 3;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Multi ",
        .damage = {20,21,22,25,26,27,28,29,32},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {45,47,49,54,56,58,60,62,67},
    };
    beta->variants[0].components[2] = (DamageComponent){
        .name = "Máximo",
        .damage =  {20*3+45,
                    21*3+47,
                    22*3+49,
                    25*3+54,
                    26*3+56,
                    27*3+58,
                    28*3+60,
                    29*3+62,
                    32*3+67},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Impacto de obús",
        "Carga giratoria capaz de golpear repetidamente a un enemigo y lanzarlo por los aires con una explosión final.\n ▰ Mantén pulsado el botón para aumentar la distancia de la carga.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {40,40,40,40,40,40,40,40,40},
        .reload = {10, 10, 10, 8, 8, 8, 8, 8, 6}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Golpe",
        .damage = {12,13,14,15,16,17,18,19,20}};
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {120,130,140,150,160,170,180,190,200}};

    return c;
}

Character loadPresentDefault() {                                           // Present Mic
    Character c;
    c.base = &present;
    c.afinity = &agresivo;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Voz de grito",
        "Dispara ondas de sonido que se extienden a través de los enemigos.\n ▰ Las ondas sonoras se volverán gradualmente más debiles y su potencia dependerá de la distancia recorrida. ",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Máximo",
        .damage = {55,57,59,60,62,64,66,68,70}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Radio",
        .damage = {40,42,44,45,46,48,49,50}
    };
    
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Voz alta",
        "Ataque que libera ondas sonoras expansivas hacia delante.\n ▰ Los enemigos alcanzados notarán un sonido explosivo en sus oídos y no podrán escuchar nada durante un tiempo determinado. ",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 4},
        .reload = {8,8,8,8,8,8,8,8,7}};
    beta->variants[0].countDamages = 4;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 4);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Corto",
        .damage = {80,82,84,90,92,944,96,98,100},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Mantenido",
        .damage = {24,25,26,27,28,29,30,31},
    };


    beta->variants[0].components[2] = (DamageComponent){
        .name = "(Radio)Corto",
        .damage = {40,43,46,50,52,54,56,58,60},
    };

    beta->variants[0].components[3] = (DamageComponent){
        .name = "(Radio)Mantenido",
        .damage = {12,13,14,15,16,17,18,19,20},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "DJ Punch",
        "Ataque que lanza un puñetazo frontal. Se vuelve más poderoso dependiendo de la cantidad de aliados que se encuentren al borde de ser noqueados o derribados. ",
        .shotsOrPercentUsage = {2,2,2,3,3,3,3,3,3},
        .reload = {8,8,8,8,8,8,8,8,7}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {100,105,110,120,124,128,132,136,140}};

    return c;
}

Character loadCementossDefault() {                                           // Cementoss
    Character c;
    c.base = &cementoss;
    c.afinity = &soporte;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Rompecolumnas",
        "Dispara proyectiles de cemento que se convierten en un pilar al impactar.\n ▰ Si se lanza a sus pies, se elevará sobre el cemento. ",
        .shotsOrPercentUsage = {5,5,5,6,6,6,6,6,7},
        .reload = {2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Piedra",
        .damage = {40,43,46,49,51,53,55,57,60}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Pilar",
        .damage = {50,55,60,65,68,71,74,77,80}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Muro de carga",
        "Crea paredes de cemento.\n ▰ Muévete en cualquier dirección para expandirlas.",
        .shotsOrPercentUsage = {1,1,1,2,2,2,2,2,3},
        .reload = {4,4,4,3,3,3,3,3,2.5}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {125,135,145,155,160,165,170,175,180},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Losa de hormigón",
        "Dispara proyectiles de cemento y crea un punto de apoyo en el lugar en el que impactan.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {10, 10, 10, 9, 9, 9, 9, 9, 8}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Piedra",
        .damage = {35,40,45,50,52,54,56,58,60}};
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Losa",
        .damage = {65,70,75,80,84,88,92,96}};

    return c;
}

Character loadEndeavorDefault() {                                             // Endeavor
    Character c;
    c.base = &endeavor;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Rayo abrasador",
        "Lanza rayos de calor con las manos.\n ▰ Mantén pulsado el botón para seguir lanzando los rayos.\n ▰ Si estos impactan contra un enemigo, le provocarán el estado de combustión. ",
        .shotsOrPercentUsage = {4,4,4,4,4,4,4,4,4},
        .reload = {2,2,2,2,2,2,2,2,2}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {20,21,22,23,24,25,26,27,28}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Flecha explosiva",
        "Ataque que lanza una flecha llameante que explota al impactar y crea una columna de fuego.\n ▰ Esta columna puede atravesar la pared y golpear a los enemigos que hay detrás de ella. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 3},
        .reload = {5.5,5.5,5.5,5.5,5.5,5.5,5.5,5.5,5.5}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Flecha",
        .damage = {45,45,45,55,55,55,55,55,65},
    };
    beta->variants[0].components[0] = (DamageComponent){
        .name = "Columna",
        .damage = {90,93,96,100,105,108,113,115,120},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Ardor prominente",
        "Lanza un rayo de calor de gran potencia proveniente de todo su cuerpo.\n ▰ Mantén pulsado el botón para lanzarlo durante más tiempo.\n ▰ Si utilizas el modo de puntería, podrás cambiar la dirección del rayo de calor.\n ▰ Puedes golpear a los enemigos a través de las paredes. ",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {100,100,100,100,100,100,100,100,100},
        .reload = {1.2,1.2,1.2,1.2,1.2,1.2,1.2,1.2,1.2}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Hit",
        .damage = {16,17,18,18,19,20,21,22,22}};

    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {16*7,17*7,18*7,18*7,19*7,20*7,21*7,22*7,22*7}};
    return c;
}

Character loadEndeavorIncandescente() {                  // Endeavor Puño (Incandescente)
    Character c;
    c.base = &endeavor;
    c.afinity = &tanque;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Puño Incandescente");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Puño incandescente: Jet Burn",
        "Ataque que lanza llamas desde los puños capaces de atravesar a los enemigos.\n ▰ Las llamas se propagarán desde el lugar en el que impactan y provocará daño a los enemigos que entren en contacto con ellas. ",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {2, 2, 2, 2, 2, 2, 2, 2, 2}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Puño",
        .damage = {60,62,64,68,70,72,74,76,80}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Fuego",
        .damage = {10,10,10,11,11,11,11,11,12}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 2;
    beta->variants = malloc(sizeof(QuirkVariant) * 2);

    beta->variants[0] = (QuirkVariant){
        "Vanishing Storm",
        "Ataque con el que crea un tornado de fuego en dirección hacia el objetivo.",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {10,10,10,9,9,9,9,9,8}
    };
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Hit",
        .damage = {5,6,7,7,8,9,10,11,11},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {85,94,103,105,114,123,132,141,143},
    };

    beta->variants[1] = (QuirkVariant){
        "Hell Curtain",
        "Las llamas se propagarán siguiendo un patrón circular durante un período de tiempo determinado.\n ▰ Las llamas permanecerán en el campo de batalla y atrae hacia su interior a los enemigos que entren en contacto con ellas. ",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {10,10,10,9,9,9,9,9,8}};
    beta->variants[1].countDamages = 1;
    beta->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {50,52,54,56,58,60,62,64,66},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Prominence Nova",
        "Dispara una bola de fuego que explotará con el impacto o al alcanzar su distancia máxima.\n ▰ Mantén presionado el botón para cargar el ataque y provocar una explosión más grande. ",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {15,15,15,13.5,13.5,13.5,13.5,13.5,12}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {17*8,18*8,19*8,20*8,21*8,22*8,23*8,24*8,25*8}};

    return c;
}

Character loadHawksDefault() {                                                   // Hawks
    Character c;
    c.base = &hawks;
    c.afinity = &dinamico;
    c.hp = 250;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Aleteo",
        "Dispara plumas que persiguen al enemigo.\n ▰ Cuando se utiliza el modo de puntería, se dirigirán directamente hacia el enemigo.",
        .shotsOrPercentUsage = {40,41,42,44,45,46,47,48,50},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {10,10,10,14,14,14,14,14,18}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Cruz de viento",
        "Se lanza en dirección al objetivo y entra en modo Vuelo libre cuando golpea a un enemigo.\n ▰ Si golpeas a un enemigo al momento de activarse la barra se restaura por completo\nPulsa de nuevo el botón para realizar un corte.\n ▰ Si lo mantienes pulsado, podrás dejar de volar. ",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {50,50,50,50,50,50,50,50,50},
        .reload = {8.5,8.5,8.5,8.5,8.5,8.5,8.5,8.5,8.5}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Inicio",
        .damage = {60,62,64,68,70,72,74,76,80},
    };
    beta->variants[0].components[0] = (DamageComponent){
        .name = "Giro",
        .damage = {80,85,90,100,105,110,115,120,125},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Alas de tormenta",
        "Dispara plumas hacia el punto de impacto.\n ▰ Mantén pulsado el botón para aumentar la velocidad de los proyectiles y el retroceso.\n ▰ Si un enemigo recibe algún impacto, su posición se volverá visible para ti y para tus aliados a través de las paredes. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 3},
        .reload = {10, 10, 10, 9, 9, 9, 9, 9, 9}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {70,74,78,85,88,91,94,97,100}};

    return c;
}

Character loadHawksCuchillada() {                          // Hawks (Cuchillada de Pluma)
    Character c;
    c.base = &hawks;
    c.afinity = &agresivo;
    c.hp = 275;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Viento invernal",
        "Usa las alas para crear un tornado que lanza a sus enemigos por los aires.\n ▰ Si mantienes pulsado el botón, lograrás golpear sucesivamente a tu enemigo y lanzarlo hacia arriba.\n ▰ A partir del nivel 7, si mantienes pulsado el botón, las ráfagas de aire se lanzarán en tres direcciones. ",
        .shotsOrPercentUsage = {4,4,4,5,5,5,6,6,6},
        .reload = {2,2,2,2,2,2,2,2,2}
    };
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {50,52,54,56,58,60,64,67,70}
    };

    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Cargado",
        .damage = {17*3,18*3,19*3,20*3,21*3,22*3,23*3,24*3,25*3}
    };QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Cuchillada de pluma",
        "Se lanza hacia el enemigo a gran velocidad y lo golpea con una espada de plumas.\n ▰ Mantén presionado el botón para desenfundar la espada.\n ▰ Al abalanzarse contra su enemigo, lanzará un corte que impactará cuando pase por su lado.\n ▰ A partir del nivel 7, se moverá sin miramientos.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {7, 7, 7, 7, 7, 7, 7, 7, 7}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Primer",
        .damage = {10,10,10,10,10,10,10,10,10},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Cortes",
        .damage = {27*4,28*4,29*4,30*4,31*4,32*4,35*4,36*4,37*4},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Rotación",
        "Se eleva mientras gira y corta a su enemigo.\n ▰ Mantén pulsado el botón para aumentar la altura del salto.\n ▰ A partir del nivel 7, los enemigos a los que impacte esta técnica por completo quedarán afectados por un efecto de rastreo. ",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 2},
        .reload = {7,7,7,6.5,6.5,6.5,6.5,6.5,6}};
    gamma->variants[0].countDamages = 3;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Rotación",
        .damage = {7,7,7,7,7,7,7,7,7}};
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {60,61,62,63,64,65,66,68,70}};
    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Explosión",
        .damage = {0,0,0,0,0,0,30,30,30}};

    return c;
}

Character loadLadyDefault() {                                               // Mount Lady
    Character c;
    c.base = &lady;
    c.afinity = &tanque;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Nudillo con pinchos",
        "Da un puñetazo que provoca dos ondas expansivas.\n ▰ Las ondas expansivas también serán enormes al convertirse en gigante. ",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 3;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Golpe",
        .damage = {30,33,36,40,42,44,46,48,50}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Gigante",
        .damage = {40,43,46,49,52,55,58,61,65}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Onda",
        .damage = {30,35,40,45,47,49,51,53,55}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Pisotón caldera",
        "Da un pisotón con fuerza, creando una onda expansiva.\n ▰ La onda expansiva creada también será enorme al convertirse en gigante y puede golpear a los enemigos a través de las paredes.",
        .shotsOrPercentUsage = {3, 3, 3, 3, 3, 3, 3, 3, 3},
        .reload = {5,5,5,4.5,4.5,4.5,4,4,3.5}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {35,37,39,40,42,44,46,48,50},
    };

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Gigante",
        .damage = {100,110,120,130,135,140,145,150,160},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Cañón cañón",
        "Ataca lanzando una patada voladora en dirección al objetivo.\n ▰ Cuando sea gigante, lanzará una patada deslizante.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {8,8,8,7,7,7,7,7,6}};
    gamma->variants[0].countDamages = 3;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Multi",
        .damage = {5,5,5,5,5,5,5,5,5}};
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Final",
        .damage = {85,90,95,100,102,104,106,108,110}};
    gamma->variants[0].components[2] = (DamageComponent){
        .name = "Gigante",
        .damage = {100,110,120,130,135,140,145,150,160}};

    return c;
}

Character loadShigarakiDefault() {                                    // Tomura Shigaraki
    Character c;
    c.base = &shigaraki;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Grieta terrestre",
        "Ataque que hace colapsar el suelo hacia delante./nEse colapso golpeará continuamente a los enemigos a los que alcance. ",
        .shotsOrPercentUsage = {4,4,4,5,5,5,5,5,6},
        .reload = {3.5,3.5,2.5,2.5,2.5,2.5,2.5,2.5,1.75}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {17,18,19,20,21,22,23,24,25}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Distracción terrestre",
        "Ataque que provoca una gran destrucción alrededor del lugar desde el que se lanza.\n ▰ Mientras está en el aire, saltará y caerá en picado. ",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {7,7,7,6.5,6.5,6.5,6.5,6.5,6}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {18,19,20,21,22,23,24,25,30},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Fallo de zona",
        "Se abalanza contra el enemigo agarrándolo y mandándolo lejos.\n ▰ Inflige daño directo a los PS de su oponente mientras lo tiene agarrado. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {8,8,8,7,7,7,7,7,6}};
    gamma->variants[0].countDamages = 3;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Agarre",
        .damage = {24,26,28,30,35,40,45,50,55}};
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Ahorcada",
        .damage = {7*5,7*5,7*5,7*5,7*5,7*5,7*5,7*5,7*5}};
    gamma->variants[0].components[2] = (DamageComponent){
        .name = "Lanzada",
        .damage = {87,88,89,90,92,94,96,98,100}};

    return c;
}

Character loadShigarakiCatastrofe() {                    // Tomura Shigaraki (Catástrofe)
    Character c;
    c.base = &shigaraki;
    c.afinity = &tanque;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Catástrofe");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Rompesuelos",
        "Ataque que lanza escombros y hace que el suelo se destroce, creando una grieta en forma de abanico. ",
        .shotsOrPercentUsage = {5,5,5,5,5,5,5,5,5},
        .reload = {2.25,2.25,2.25,1.75,1.75,1.75,1.75,1.75,1.25}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Roca",
        .damage = {40,42,44,45,46,47,48,49,50}
    };
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Grieta",
        .damage = {30*2,31*2,32*2,33*2,34*2,35*2,36*2,37*2,38*2}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Disparo de rencor",
        "Ataque que lanza escombros que provocan destrozos en la zona en la que se lancen y que hacen que cualquier enemigo golpeado por este ataque colapse.\n ▰ Este estado de colapso hará que reciban daño durante un período de tiempo determinado y se extenderá hacia los enemigos cercanos. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {6.5, 6.5, 6.5, 6, 6, 6, 6, 6, 5.5}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Roca",
        .damage = {50,55,60,65,67,69,71,73,75},
    };
    beta->variants[0].components[0] = (DamageComponent){
        .name = "Deterioro",
        .damage = {25,30,35,35,37,39,41,43,45},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Catástrofe",
        "Ataque que embiste en dirección hacia su objetivo.\n ▰ Los enemigos golpeados por este ataque colapsarán.\n ▰ Mantén pulsado el botón para cargarlo y destruir el suelo al final del ataque. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {8,8,8,7,7,7,7,7,6}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Embiste",
        .damage = {30,32,34,36,38,40,42,44,45}
    };
    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Deterioro",
        .damage = {50,55,60,65,67,69,71,73,75}
    };

    return c;
}

Character loadAFODefault() {                                               // All For One
    Character c;
    c.base = &afo;
    c.afinity = &tecnico;
    c.hp = 400;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Golpe de gracia",
        "Dispara una onda de choque desde la palma de la mano que penetrará a través de los enemigos.\n ▰ Mantén presionado el botón para aumentar el poder de la onda de choque, aunque se reducirá la velocidad del mismo.",
        .shotsOrPercentUsage = {58,60,62,66,68,70,72,74,80},
        .reload = {2,2,2,2,2,2,2,2,2}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Normal",
        .damage = {58, 60, 62, 66, 68, 70, 72, 74, 78}
    };
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Cargado",
        .damage = {150,153,156,160,162,164,166,168,170}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Garra manipuladora",
        "Ataque se dispara desde las yemas de sus dedos deformados.\n ▰ Puede atravesar la pared e impactar a los enemigos que hay detrás de ella. ",
        .shotsOrPercentUsage = {2,2,2,2,2,2,2,2,2},
        .reload = {5.5,5.5,5.5,4.5,4.5,4.5,4.5,4.5,3.5}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Golpe",
        .damage = {18,19,20,21,22,23,24,25,26},
    };

    beta->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {18*6,19*6,20*6,21*6,22*6,23*6,24*6,25*6,26*6},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Aliento negro",
        "Ataque que aleja a los enemigos.\n ▰ Mantén presionado el botón para lanzar hacia delante a los enemigos que se encuentren cerca de ti.",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {12,11.5,11,10.5,10,9.5,9,8.5,8}};
    gamma->variants[0].countDamages = 0;

    return c;
}

Character loadAFOYoungDefault() {                                    // All For One Young
    Character c;
    c.base = &afoYoung;
    c.afinity = &tanque;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Entierro de trueno",
        "Dispara un láser que atraviesa al enemigo.\n ▰ El láser explotará cuando impacte contra el enemigo o alcance su distancia máxima.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {2, 2, 2, 2, 2, 2, 2, 2, 2}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "laser",
        .damage = {58, 60, 62, 66, 68, 70, 72, 74, 78}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Explosión",
        .damage = {35,36,37,38,39,40,41,42,43}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 2;
    beta->variants = malloc(sizeof(QuirkVariant) * 2);

    beta->variants[0] = (QuirkVariant){
        "Extinción",
        "Ataque que hace caer una Bola Oscura en línea recta.\n ▰ Estas explotarán al hacer impacto.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {8,8,8,8,7,7,7,7,6}};
    beta->variants[0].countDamages = 2;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Esferas",
        .damage = {40,40,40,40,40,40,40,40,40},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Explosiones",
        .damage = {58,60,62,62,64,66,68,70,70},
    };

    beta->variants[1] = (QuirkVariant){
        "Meteoro",
        "Manten presionado el ataque para disparar una bala de energía. ",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {8,8,8,8,7,7,7,7,6}};
    beta->variants[1].countDamages = 2;
    beta->variants[1].components = malloc(sizeof(DamageComponent) * 2);

    beta->variants[1].components[0] = (DamageComponent){
        .name = "Esfera",
        .damage = {5,5,5,5,5,5,5,5,5},
    };
    beta->variants[1].components[1] = (DamageComponent){
        .name = "Explosión",
        .damage = {150,155,160,161,171,176,181,186,200},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 2;
    gamma->variants = malloc(sizeof(QuirkVariant) * 2);


    gamma->variants[0] = (QuirkVariant){
        "Juicio divino",
        "Mientras flota en el aire, asciende al pulsar el botón de salto y desciende al pulsar el botón para agacharse.\n ▰ Carga energía con las alas de su espalda y la libera hacia delante con un alcance considerable.\n ▰ Si se esquiva, los disparos restantes disminuirán hasta que se detenga el ataque.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {20,20,20,20,20,20,20,20,20},
        .reload = {.25,.25,.25,.2,.2,.2,.2,.2,.15}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Minimo",
        .damage = {10,10,10,10,10,10,10,10,10}};
    
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {150,160,170,170,180,190,200,210,210}};

    gamma->variants[1] = (QuirkVariant){
        "Bolas de la muerte",
        "Vuelve a pulsar el botón mientras cargas el ataque para disparar una bala de energía. ",
        .shotsOrPercentUsage = {0},
        .reload = {0}};
    gamma->variants[1].countDamages = 1;
    gamma->variants[1].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[1].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {53,55,57,61,63,65,66,67,69}};
    
    return c;
}

Character loadDabiDefault() {                                                     // Dabi
    Character c;
    c.base = &dabi;
    c.afinity = &tecnico;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Luz fantasma",
        "Lanza bolas de fuego que persigue a los enemigos.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {42,48,54,60,62.4,64.8,67.2,68.6,72}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Incendio",
        "Coloca una trampa que crea una columna de fuego cuando se acerca el enemigo.\n ▰ Estas trampas pueden colocarse en el aire. También puedes colocar más de una trampa. ",
        .shotsOrPercentUsage = {3, 3, 3, 4, 4, 4, 4, 4, 5},
        .reload = {5,5,5,4.75,4.75,4.75,4.75,4.75,4.5}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {20*4,22*4,24*4,25*4,26*4,27*4,28*4,29*4,30*4},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Calcinación",
        "Ataque con el crea una llama circular utilizando las piernas.\n ▰ Las llamas se mantienen durante un tiempo determinado y son capaces de anular proyectiles enemigos. ",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 1},
        .reload = {9, 9, 9, 8, 8, 8, 8, 8, 7}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);
    
    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Barrera",
        .damage = {24,26,28,30,32,34,36,38,40}};
        
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Activación",
        .damage = {20,25,30,35,40,45,50,55,60}};
        
    return c;
}

Character loadDabiLlamas() {                                // Dabi (Llamas de la Locura)
    Character c;
    c.base = &dabi;
    c.afinity = &agresivo;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Llamas de la locura");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Llamarada del rencor",
        "Mantén pulsado el botón para cargar el ataque y lanzar hasta 5 columnas de fuego hacia delante.\n ▰ Cuando se mejora, la columna disparada será más grande al instante. ",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {2,2,2,2,2,2,2,2,2}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {55,56,57,60,61,62,63,64,70}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Mandamiento ardiente",
        "Patada con la que se envuelve en llamas y se aferra al enemigo al que golpea.\n ▰ Cuando se mejora, la distancia máxima de la patada aumentará significativamente. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {6, 6, 6, 5, 5, 5, 5, 5, 4}};
    beta->variants[0].countDamages = 3;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Abrazo",
        .damage = {20*4,20*4,20*4,20*4,20*4,20*4,20*4,20*4,20*4},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Liberación",
        .damage = {39,45,51,60,65,70,75,80,90},
    };
    beta->variants[0].components[2] = (DamageComponent){
        .name = "Total",
        .damage = {40+39,40+45,40+51,40+60,40+65,40+70,40+75,40+80,40+90},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Llamas de la locura",
        "Técnica con la que se envolverá en llamas y consumirá PS mientras se fortalece y mejora sus dones especiales.\n ▰ Provoca una explosión al recibir una cantidad de daño determinado a los PS y creará una explosión aún mayor al agotarse la técnica. ",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {100,100,100,100,100,100,100,100,100},
        .reload = {0}};
    gamma->variants[0].countDamages = 3;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Explosiones",
        .damage = {24,24,24,24,24,24,24,24,24}};
    
    gamma->variants[0].components[1] = (DamageComponent){
        .name = "Cancelación",
        .damage = {20,20,20,20,20,20,20,20,20}};
        
    gamma->variants[0].components[2] = (DamageComponent){
        .name = "Final",
        .damage = {33*5,33*5,33*5,33*5,33*5,33*5,33*5,33*5,33*5}};
        

    return c;
}

Character loadTogaDefault() {                                              // Himiko Toga
    Character c;
    c.base = &toga;
    c.afinity = &tecnico;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Navajazo lento",
        "Ataque con el que lanza cuchillos. Mantén pulsado el botón para lanzarlos continuamente.",
        .shotsOrPercentUsage = {16,18,20,20,22,24,26,28,30},
        .reload = {.5,.5,.5,.5,.5,.5,.5,.5,.5}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {20,22,24,25,26,27,28,29,30}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Corte limpio",
        "Se lanza hacia el objetivo y le ataca con un cuchillo.\n ▰ Mantén pulsado el botón para lanzarte continuamente y, al golpear a un enemigo, la distancia de carga aumentará.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {4,4,4,3.5,3.5,3.5,3.5,3.5,3}};
    beta->variants[0].countDamages = 3;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Tacleo",
        .damage = {10,10,10,10,10,10,10,10,10},
    };
    beta->variants[0].components[1] = (DamageComponent){
        .name = "Giro",
        .damage = {40,42,46,50,54,58,62,64,66},
    };
    beta->variants[0].components[2] = (DamageComponent){
        .name = "Navajeada",
        .damage = {72,80,83,87,90,94,98,101,108},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Jeringas chupasangres",
        "Lanza jeringas al enemigo que chuparán su sangre si llega a alcanzarlo.\n ▰ Si se toma la sangre de un enemigo nuevo cuando ya se tiene almacenada la de otro, esta última se sobreescribirá. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {5,5,5,4.5,4.5,4.5,4.5,4.5,4}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {20*2,25*2,30*2,17*4,18*4,19*4,20*4,21*4,15*6}};

    return c;
}

Character loadTogaBaile() {                             // Himico Toga (Baile de Aguijón)
    Character c;
    c.base = &toga;
    c.afinity = &dinamico;
    c.hp = 250;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Navajazo rotatorio",
        "Ataque que lanza cuchillos.\n ▰ El cuchillo volverá hasta Toga cuando rebote contra algo o alcance su distancia máxima.",
        .shotsOrPercentUsage = {8, 8, 8, 8, 8, 8, 8, 8, 8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Ida",
        .damage = {19,20,21,22,23,24,25,26,27}
    };
    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Vuelta",
        .damage = {20,21,22,23,24,25,26,27,28}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Baile del aguijón",
        "Ataque con el que salta y lanza una jeringuilla hacia abajo desde el aire.\n ▰ Ella dará una voltereta en el aire.",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 2, 2, 2},
        .reload = {7, 7, 7, 6.5, 6.5, 6.5, 6.5, 6.5, 6}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {80,83,86,90,93,96,99,102,105},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Chupasangre (Cambio)",
        "Lame la sangre obtenida al golpear a un enemigo con la jeringuilla, al que acaba enviando hacia atrás.\n ▰ Si mantienes pulsado el botón, podrá transformarse inmediatamente después de haber obtenido la sangre.",
        .shotsOrPercentUsage = {2,2, 2, 3, 3, 3, 3, 3, 3},
        .reload = {7,7,7,7,7,7,7,7,6}};
    gamma->variants[0].countDamages = 2;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Jeringa",
        .damage = {30,32,33,35,36,37,38,39,40}};
    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Corte",
        .damage = {60,63,66,69,72,74,76,78,80}};

    return c;
}

Character loadTwiceDefault() {                                                   // Twice
    Character c;
    c.base = &twice;
    c.afinity = &dinamico;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Disparo de dagas",
        "Ataque que lanza múltiples cuchillos.",
        .shotsOrPercentUsage = {6,6,6,7,7,7,7,7,8},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 2;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 2);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Minimo",
        .damage = {23,24,25,26,27,28,29,30,31}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Máximo",
        .damage = {23*3,24*3,25*3,26*3,27*3,28*3,29*3,30*3,31*3}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Autoduplicación",
        "Ataque que crea un clon de sí mismo que ataca a los enemigos cercanos.\n ▰ El clón desaparecerá tras un período de tiempo determinado o al recibir daño.",
        .shotsOrPercentUsage = {1,1,1,1,1,1,1,1,1},
        .reload = {15,15,15,13,13,13,13,13,11}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {65,75,85,95,199,105,110,115,120},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Impulso pedal",
        "Ataque que permite atacar con el cuchillo extendiendo la cinta métrica en dirección al objetivo.",
        .shotsOrPercentUsage = {2, 2, 2, 3, 3, 3, 3, 3, 4},
        .reload = {4,4,4,4,4,4,4,4,4}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {25*2,26*2,27*2,28*2,29*2,30*2,31*2,32*2,33*2}};

    return c;
}

Character loadCompressDefault() {                                         // Mr. Compress
    Character c;
    c.base = &compress;
    c.afinity = &soporte;
    c.hp = 300;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Magia de producción",
        "Lanza una canica comprimida.\n ▰ La canica se descomprimirá después del lanzamiento.\n ▰ Si utilizas el modo de puntería, aumentará su alcance.",
        .shotsOrPercentUsage = {7,7,7,8,8,8,8,8,9},
        .reload = {1, 1, 1, 1, 1, 1, 1, 1, 1}};
    alpha->variants[0].countDamages = 3;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Canica",
        .damage = {5,5,5,5,5,5,5,5,5}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Objeto",
        .damage = {47,48,49,50,51,52,53,54,55}
    };
    alpha->variants[0].components[2] = (DamageComponent){
        .name = "Explosión",
        .damage = {12,13,14,15,16,17,18,19,20}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Barajado",
        "Crea una barrera que devuelve las balas enemigas.\n ▰ Al desviarse, aumentará el daño.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {0},
        .reload = {.5,.5,.5,.5,.5,.5,.5,.5,.5}};
    beta->variants[0].countDamages = 0;
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Elige una",
        "Se comprime a sí mismo y da un gran salto a través del humo.",
        .shotsOrPercentUsage = {1, 1, 1, 1, 1, 1, 1, 1, 2},
        .reload = {7,7,7,5,5,5,5,5,5}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {70,75,80,85,90,95,100,105,125}};

    return c;
}

Character loadKurogiriDefault() {                                             // Kurogiri
    Character c;
    c.base = &kurogiri;
    c.afinity = &soporte;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Materia oscura",
        "Ataque que libera una niebla negra en espiral.\n ▰ Al alcanzar a un objetivo o llega a su punto máximo, se mantendrá en ese lugar durante un período de tiempo.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7,7, 7, 7, 8},
        .reload = {2,2,2,2,2,2,2,2,2}};
    alpha->variants[0].countDamages = 3;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 3);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Disparo",
        .damage = {44,46,48,55,57,59,61,63,65}
    };
    alpha->variants[0].components[1] = (DamageComponent){
        .name = "Despliegue",
        .damage = {12*3,13*3,14*3,15*3,16*3,17*3,18*3,19*3,20*3}
    };
    alpha->variants[0].components[2] = (DamageComponent){
        .name = "Máximo",
        .damage =  {12*3+44,
                    13*3+46,
                    14*3+48,
                    15*3+55,
                    16*3+57,
                    17*3+59,
                    18*3+51,
                    19*3+63,
                    20*3+65}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Portal de teletransporte",
        "Pulsa brevemente el botón para conectar los espacios lejanos marcados con la niebla.\n ▰ Mantén pulsado el botón para enviar el portal y suéltalo para establecer la distancia entre los dos portales. ",
        .shotsOrPercentUsage = {2, 2, 2, 2, 2, 2, 3, 3, 3},
        .reload = {13.5,13.5,13.5,12,12,12,12,12,11}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {80,83,86,90,92,94,96,98,100},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 3;
    gamma->variants = malloc(sizeof(QuirkVariant) * 3);

    gamma->variants[0] = (QuirkVariant){
        "Persecución sombría",
        "Carga giratoria capaz de golpear repetidamente a un enemigo y lanzarlo por los aires con una explosión final.\n ▰ Mantén pulsado el botón para aumentar la distancia de la carga.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {35,35,35,35,35,35,35,35,20},
        .reload = {1.1,1.05,1,.95,.9,.85,.8,.75,.7}};
    gamma->variants[0].countDamages = 0;

    
    gamma->variants[1] = (QuirkVariant){
        "Incursión α",
        "Si utilizas el don especial α mientras lo controlas, este se lanzará hacia donde se esté apuntando desde la niebla.\n ▰ Si aprietas brevemente el botón del don especial γ, te teletransportarás hacia donde esté la niebla.\n ▰ Mantenlo pulsado para regresar a tu ubicación original.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {15,15,15,8,8,8,8,8,8},
        .reload = {0}};
    gamma->variants[1].countDamages = 3;
    gamma->variants[1].components = malloc(sizeof(DamageComponent) * 3);

    gamma->variants[1].components[0] = (DamageComponent){
        .name = "Disparo",
        .damage = {15,16,17,20,21,22,23,24,25}
    };
    gamma->variants[1].components[1] = (DamageComponent){
        .name = "Despliegue",
        .damage = {15*3,16*3,17*3,20*3,16*3,21*3,22*3,23*3,25*3}
    };
    gamma->variants[1].components[2] = (DamageComponent){
        .name = "Máximo",
        .damage =  {15*4+15,
                    16*4+16,
                    17*4+17,
                    20*4+20,
                    21*4+21,
                    22*4+22,
                    23*4+23,
                    24*4+24,
                    25*4+25}
    };

    gamma->variants[2] = (QuirkVariant){
        "Incursión β",
        "Si utilizas el don especial β mientras lo controlas, este se lanzará hacia donde se esté apuntando desde la niebla.\n ▰ Si aprietas brevemente el botón del don especial γ, te teletransportarás hacia donde esté la niebla.\n ▰ Mantenlo pulsado para regresar a tu ubicación original.",
        .typeGestion = PERCENT,
        .shotsOrPercentUsage = {50,50,50,50,50,50,35,35,35},
        .reload = {0}};
    gamma->variants[2].countDamages = 1;
    gamma->variants[2].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[2].components[0] = (DamageComponent){
        .name = "Disparo",
        .damage = {105,109,113,120,123,126,129,132,135}
    };

    return c;
}

Character loadOverhaulDefault() {                                            // Overahaul
    Character c;
    c.base = &overhaul;
    c.afinity = &soporte;
    c.hp = 350;
    strcpy(c.quirkSet.name, "Default");

    QuirkGroup *alpha = &c.quirkSet.quirkGroup[ALPHA];
    alpha->quirkSkill = ALPHA;
    alpha->count = 1;
    alpha->variants = malloc(sizeof(QuirkVariant) * 1);

    alpha->variants[0] = (QuirkVariant){
        "Ruptura infernal",
        "Ataque que lanza piedras muy afiladas.\n ▰ Estas explotarán al impactar contra su objetivo o cuando llegan a su distancia máxima.",
        .shotsOrPercentUsage = {6, 6, 6, 7, 7, 7, 7, 7, 8},
        .reload = {2,2,2,2,2,2,2,2,2}};
    alpha->variants[0].countDamages = 1;
    alpha->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    alpha->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {12*3+15,13*3+15,14*3+15,15*3+15,16*3+15,17*3+15,18*3+15,19*3+15,20*3+15}
    };
QuirkGroup *beta = &c.quirkSet.quirkGroup[BETA];
    beta->quirkSkill = BETA;
    beta->count = 1;
    beta->variants = malloc(sizeof(QuirkVariant) * 1);

    beta->variants[0] = (QuirkVariant){
        "Lanza oscura perforadora",
        "Ataque que crea y lanza rocas en forma de espinas perforadoras hacia su objetivo desde el suelo o alguna pared. ",
        .shotsOrPercentUsage = {4, 4, 4, 4, 4, 4, 4,4, 4},
        .reload = {3,3,3,2.5,2.5,2.5,2.5,2.5,1.5}};
    beta->variants[0].countDamages = 1;
    beta->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    beta->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {30*3,32*3,34*3,36*3,38*3,40*3,42*3,44*3,46*3},
    };
QuirkGroup *gamma = &c.quirkSet.quirkGroup[GAMMA];
    gamma->quirkSkill = GAMMA;
    gamma->count = 1;
    gamma->variants = malloc(sizeof(QuirkVariant) * 1);

    gamma->variants[0] = (QuirkVariant){
        "Ataud de grilletes",
        "Ataque que libera rocas desde el suelo y las lanza hacia delante.\n ▰ Si golpea a un enemigo, lo dejará atado.",
        .shotsOrPercentUsage = {1, 1, 1, 2, 2, 2, 2, 2, 2},
        .reload = {11, 11, 11, 11, 11, 11, 11, 11, 10}};
    gamma->variants[0].countDamages = 1;
    gamma->variants[0].components = malloc(sizeof(DamageComponent) * 1);

    gamma->variants[0].components[0] = (DamageComponent){
        .name = "Daño",
        .damage = {90,94,98,105,108,111,114,117,120}};

    return c;
}


int loadCharacters(Character *arr) {
    int index = 0;
    arr[index++] = loadMidoriyaDefault();
    arr[index++] = loadMidoriyaFullBullet();
    arr[index++] = loadMidoriyaOFADefault();
    arr[index++] = loadBakugoDefault();
    arr[index++] = loadBakugoAmetralladora();
    arr[index++] = loadOchacoDefault();
    arr[index++] = loadOchacoZeroSatellites();
    arr[index++] = loadIidaDefault();
    arr[index++] = loadShotoDefault();
    arr[index++] = loadShotoFiloHelado();
    arr[index++] = loadTsuyuDefault();
    arr[index++] = loadKirishimaDefault();
    arr[index++] = loadKirishimaRedDrive();
    arr[index++] = loadMomoDefault();
    arr[index++] = loadDenkiDefault();
    arr[index++] = loadDenkiRelampago();
    arr[index++] = loadMonomaDefault();
    arr[index++] = loadKendoDefault();
    arr[index++] = loadKendoPalmasGemelas();
    arr[index++] = loadIbaraDefault();
    arr[index++] = loadMirioDefault();
    arr[index++] = loadMirioCizallas();
    arr[index++] = loadTamakiDefault();
    arr[index++] = loadNejireDefault();
    arr[index++] = loadShinsoDefault();
    arr[index++] = loadAllMightDefault();
    arr[index++] = loadAllMightAmetralladora();
    arr[index++] = loadBlindadoDefault();
    arr[index++] = loadAizawaDefault();
    arr[index++] = loadPresentDefault();
    arr[index++] = loadCementossDefault();
    arr[index++] = loadEndeavorDefault();
    arr[index++] = loadEndeavorIncandescente();
    arr[index++] = loadHawksDefault();
    arr[index++] = loadHawksCuchillada();
    arr[index++] = loadLadyDefault();
    arr[index++] = loadShigarakiDefault();
    arr[index++] = loadShigarakiCatastrofe();
    arr[index++] = loadAFODefault();
    arr[index++] = loadAFOYoungDefault();
    arr[index++] = loadDabiDefault();
    arr[index++] = loadDabiLlamas();
    arr[index++] = loadTogaDefault();
    arr[index++] = loadTogaBaile();
    arr[index++] = loadTwiceDefault();
    arr[index++] = loadCompressDefault();
    arr[index++] = loadKurogiriDefault();
    arr[index++] = loadOverhaulDefault();
    return index;
}