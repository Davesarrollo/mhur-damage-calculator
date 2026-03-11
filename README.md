# MHUR Damage Calculator (C Console Application)

Aplicación de consola desarrollada en **C** para visualizar estadísticas y calcular daño de personajes del videojuego *My Hero Ultra Rumble*.  
El proyecto utiliza **programación estructurada**, **modularización** y **modelado de datos mediante `structs`**.

Incluye funcionalidades pensadas para cubrir necesidades tanto de jugadores casuales como competitivos.

---

## Funciones del Programa

### Módulo de estadísticas

El videojuego, por defecto, solo indica qué atributos aumentan en los movimientos, pero no especifica **cuánto aumentan ni cómo se traducen esos valores dentro del juego**.

Este módulo muestra:
- Daño base exacto de cada movimiento.
- Valores por nivel.
- Tiempo de recarga.
- Incrementos de duración de habilidades o proyectiles.

```
            Izuku Midoriya            PS:300

═════════════ DONES ESPECIALES ═════════════

 Delaware Smash Air Force ▰▰▰▰▰▰▰▰▰▰▰(Alpha)
 Libera una onda de choque con un capirotazo.
 
 Nivel  Tiros  Recarga  Daño
   1      6     1.00s    58 
   2      6     1.00s    60 
...

```

---

### Módulo de aleatorización

Pensado para jugadores que disfrutan partidas personalizadas con personajes o configuraciones poco habituales se incluye este modulo de aleatorización que el juego no posee de forma nativa.

Incluye aleatorización de:
- Personajes
- Afinidades
- Escenarios
- Nivel
```
        Mapa:      Isla Yûei (UA)
        Personaje: Himiko Toga(Baile del aguijón)
        Afinidad:  Agresivo 
        Nivel:     5

```
---


## Estructura
src/main.c - Programa principal

src/personajes.c/h - Definición y datos de personajes

src/interfaz.c/h - Interfaz de consola

src/random.c/h - Modulo de aleatorización 

src/stats.c/h - Visualización de estadisticas y movimientos


El código está organizado de forma modular para facilitar su mantenimiento y escalabilidad.

---

## Funcionalidades Actuales

- Visualización estructurada de personajes.
- Organización de datos mediante `structs`.
- Interfaz de consola modular.
- Sistema de aleatorización de:
  - Personaje
  - Nivel
  - Escenario
  - Afinidad
- Uso de `Makefile` para compilación multiplataforma.

---

## Objetivos del Proyecto

- [x] Sistema base de visualización de personajes  
- [x] Implementación modular de funcionalidades  
- [x] Módulo de aleatorización  
- [ ] Implementar cálculo de daño básico  
- [ ] Incorporar efectos de compañeros  
- [ ] Añadir multiplicadores por *tuning*  

---

## Uso

```bash
make          # Compilación automática
make linux    # Crear 'stats' (Linux)
make windows  # Crear 'stats.exe' (Windows)
make run      # Compilar y ejecutar
make clean    # Limpiar archivos generados
```
---
