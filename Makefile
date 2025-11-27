# Configuración del compilador
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Isrc
TARGET = stats
WINDOWS_TARGET = stats.exe
SRC = src/main.c src/personajes.c src/interfaz.c
OBJ = $(SRC:.c=.o)

# Detectar sistema operativo
ifeq ($(OS),Windows_NT)
    DETECTED_OS = Windows
else
    DETECTED_OS = $(shell uname -s)
endif

# Regla principal - auto-detectar SO
$(TARGET): $(OBJ)
	@echo "🔨 Compilando para $(DETECTED_OS)..."
ifeq ($(DETECTED_OS),Windows)
	$(CC) $(CFLAGS) -o $(WINDOWS_TARGET) $(OBJ) -lm
	@echo "✅ Ejecutable creado: $(WINDOWS_TARGET)"
else
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) -lm
	@echo "✅ Ejecutable creado: $(TARGET)"
endif

# Regla específica para Linux
linux: $(OBJ)
	@echo "🔨 Compilando para Linux..."
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) -lm
	@echo "✅ Ejecutable creado: $(TARGET)"

# Regla específica para Windows
windows: $(OBJ)
	@echo "🔨 Compilando para Windows..."
	$(CC) $(CFLAGS) -o $(WINDOWS_TARGET) $(OBJ) -lm
	@echo "✅ Ejecutable creado: $(WINDOWS_TARGET)"

# Regla para archivos objeto
%.o: %.c
	@echo "📦 Compilando $<..."
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos compilados
clean:
	@echo "🧹 Limpiando archivos compilados..."
	rm -f $(TARGET) $(WINDOWS_TARGET) $(OBJ)
	@echo "✅ Limpieza completada"

# Ejecutar el programa
run: $(TARGET)
	@echo "🚀 Ejecutando programa..."
	./$(TARGET)

.PHONY: clean run linux windows