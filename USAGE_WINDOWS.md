# Uso en Windows – MHUR Damage Calculator

Este documento describe cómo ejecutar correctamente **MHUR Damage Calculator** en sistemas Windows para garantizar una correcta visualización de caracteres, símbolos e iconos utilizados por el programa.

---

## Importante

La versión para Windows **NO debe ejecutarse desde el símbolo del sistema (CMD)**.

Debido al uso de caracteres especiales y formatos visuales, el programa debe ejecutarse desde **Windows Terminal** para evitar problemas de compatibilidad y visualización incorrecta.

---

## ✅ Requisitos

- Windows 10 o Windows 11
- **Windows Terminal** instalado

---

## 🧩 Instalación de Windows Terminal

### Windows 10 / Windows 11

Windows Terminal está disponible gratuitamente desde la Microsoft Store:
 https://aka.ms/terminal

---

## ▶️ Ejecución del programa en windows 10

### Opción 1: Ejecutar desde Windows Terminal (recomendado)

1. Navega hasta el directorio donde se encuentra el ejecutable (`stats.exe`).
2. Click secundario en la carpeta que contiene el ejecutable
3. Ejecuta el programa con:

```
.\stats.exe
```

## Opción 2: Crear un acceso directo (recomendado para uso frecuente)

Dado que Windows 10 no permite establecer fácilmente una terminal predeterminada, se recomienda crear un acceso directo para ejecutar el programa directamente en Windows Terminal.

Pasos:

1. Haz clic derecho en el escritorio → Nuevo → Acceso directo.
2. En la ubicación del elemento, escribe:
    ```
    wt.exe "ruta_del_ejecutable"
    ```
    ejemplo:
    ```
    wt.exe "C:\Users\Usuario\Downloads\stats.exe"
    ```
3. asigna un nombre al acceso directo
4. guarda los cambios

Al usar este acceso directo, el programa se ejecutará automáticamente dentro de Windows Terminal.
    