# MHUR Damage Calculator (C Console Application)

Aplicación en C desarrollada para calcular y visualizar de forma estructurada el daño de personajes del videojuego My Hero Ultra Rumble, organización de datos mediante structs.

# Estructura
src/main.c - Programa principal

src/personajes.c/h - Datos de personajes

src/interfaz.c/h - Interfaz de consola

src/random.c/h - Modulo para aleatorizar 

src/stats.c/h - Modulo para mostrar caracteristicas de movimientos de personajes

## Objetivos Inmediatos

- [x] Sistema base de visualización de personajes
- [x] Implementación de modulos para distintas funciones 
- [x] Implementación del modulo Aleatorizador
- [ ] Implementar cálculo de daño básico
- [ ] Incorporar efectos de compañeros
- [ ] Añadir multiplicadores por tunning

## Uso
```bash
make        # Compilación automática
make linux  # Crear 'stats' (Linux)
make windows # Crear 'stats.exe' (Windows)
make run    # Compilar y ejecutar
make clean  # Limpiar
```