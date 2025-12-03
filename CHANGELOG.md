# CHANGELOG
## [1.3.0] - 2025-12-03

### Added
- Agregados datos de Tomura Shigaraki (Destrucción de las mil manos)
- Implementado nuevo tipo de gestión 'time' para acciones especiales
- Agregado sistema de dato 'hits' en cálculos de daño (interno, no visible para usuarios)
- Añadido daño máximo del giro en acción especial γ (Impacto de Obús) de Katsuki Bakugô
- Añadido daño extra del proyectil reflejado en acción especial β (Barajado) de Mr. compress

### Changed
#### Mejoras de Sistema
- Refactorizada función de visualización de tablas para mejor legibilidad del código
- Aumento de visualización a 2 decimales para tiempo de recarga
- Acciones especiales que consumían 100% ahora usan gestión 'time' en lugar de 'percent'

#### Sistema de Hits Implementado
Tenya Iida, Shōto Todoroki (ambas versiones), Tsuyu Asui, Eijirō Kirishima (ambas versiones), Momo Yaoyorozu, Denki Kaminari (ambas versiones), Neito Monoma, Itsuka Kendo (ambas versiones), Ibara Shiosaki, Mirio Tôgata (ambas versiones), Tamaki Amajiki, Nejire Hadô, Hitoshi Shinso, All Might (ambas versiones), Shōta Aizawa, Present Mic, Cementoss, Endeavor (ambas versiones), Hawks (ambas versiones), Mount Lady, Tomura Shigaraki (ambas versiones), All For One, All For One \<Young>, Dabi (ambas versiones), Himiko Toga (ambas versiones), Twice, Mr. Compress, Overhaul

#### Migración a Gestión 'Time'
- γ: Segunda Transmisión (Izuku Midoriya OFA): 'percent' → 'time'
- γ: Turbomotor (Tenya Iida): 'percent' → 'time'
- γ: Camuflaje de Rana (Tsuyu Asui): 'percent' → 'time'
- γ: Copia: Acero (Neito Monoma): 'percent' → 'time'
- β: Caída Espectral (Mirio Tôgata): 'charges' → 'time'
- β: Phantom Rush (Mirio Tôgata(Contrataque de cizallas)): 'percent' → 'time'
- γ: Cañón de Plasma (Tamaki Amajiki): 'percent' → 'time'
- γ: Dron: Anima (All Might Blindado): 'percent' → 'time'
- γ: Llamas de la Locura (Dabi(Llamas de la locura)): 'percent' → 'time'
- γ: Ardor Prominente (Endeavor): 'percent' → 'time'

#### Visualización Mejorada
- α: Golpe Metralla (Katsuki Bakugô(Ametralladora)): daño individual por bala → daño total por tiro
- β: Home Run Cometa (Ochako Uraraka): porcentaje mínimo ajustado a consumo total de animación
- β: Gring Wave (Nejire Hadô): ahora muestra rango mínimo-máximo de daño
- γ: Serpiente de Cintas (Shōta Aizawa): ahora muestra rango mínimo-máximo de daño
- α: Texas Smash (All Might): eliminado daño de onda expansiva en niveles 1-3 (no existe)
- β: Chargezuma (All Might Blindado): daño base ahora se muestra separado

#### Refactorización de Daños
- **Endeavor (Original):**
  - γ: Ardor Prominente
- **Endeavor (Puño Incandescente):**
  - β: Vanishing Storm
- **Present Mic:**
  - β: Voz Alta
- **Hawks (Cuchillada de Pluma):**
  - β: Cuchillada de Pluma
  - γ: Rotación
- **Mount Lady:**
  - γ: Cañón Cañón
- **Shōto Todoroki:**
  - γ: Estalagmita de Hielo y Puente de Hielo
- **Tomura Shigaraki (Original):**
  - α: Grieta Terrestre
  - γ: Fallo de Zona
- **Tomura Shigaraki (Catástrofe):**
  - α: Rompesuelos
- **All For One:**
  - β: Garra Manipuladora
- **All For One <Young>:**
  - γ: Juicio Divino
- **Dabi (Original):**
  - γ: Calcinación
  - β: Incendio
- **Dabi (Llamas de la Locura):**
  - β: Mandamiento Ardiente
  - γ: Llamas de la Locura
- **Himiko Toga (Original):**
  - β: Corte Limpio
  - γ: Jeringas Chupasangre
- **Twice:**
  - γ: Impulso Pedal
- **Kurogiri:**
  - γ: Incursión α - datos de daño actualizados
  - α: Materia Oscura
- **Overhaul:**
  - α: Ruptura Infernal
  - β: Lanza Oscura Perforadora
  - γ: Ataud de Grilletes
- **Denki Kaminari (Relámpago):**
  - β: Voltio Rastreador

### Fixed
- β: Detroit Smash Quíntuple (Izuku Midoriya OFA): corregidos datos de consumo
- β: Red Spirit (Eijirō Kirishima): corregidos datos de daño
- γ: Crusifixión (Ibara Shiosaki): corregida descripción
- α: Voz de Grito (Present Mic): corregidos datos de daño
- γ: Serpiente de Cintas (Shōta Aizawa): corregido nombre y descripción
- β: Palmas Gemelas y Espíritu Indomable (Itsuka Kendo - Palmas Gemelas): mejoradas descripciones
- Nombre del set de dones de Hawks (Cuchillada de Pluma): añadido


## [1.2.0] - 2025-11-27
### Changed
- Refactorizado sistema de visualización de acciones especiales
- Mejora el formato y legibilidad para personajes con múltiples habilidades
### Fixed
- Corregidas discrepancias entre descripciones y comportamiento real de:
  - **Izuku Midoriya OFA**: 
    - Acción Especial - Actualización de texto desriptivo 
    - Don especial Alpha - Ajustar descripción para coincidir con mecánica real

