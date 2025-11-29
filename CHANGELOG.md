# Changelog
## [1.3.0] - 2025-27-27
### Added
- Implementado nuevo tipo de gestión 'time' para acciones especiales
- Agregado dato 'hits' en cálculos de daño (interno, no visible para usuarios)
- Añadido daño(máximo) del giro de acción especial gamma (Impacto de Obús) de Katsuki Bakugô

### Changed
- Refactorizada función de visualización de tablas para mejor legibilidad del código
- Acciones especiales que usaban gestión 'percent' y consumían 100% ahora usan gestión 'time'
- Cambiada gestión de 'percent' a 'time' en acción gamma (Segunda Transmisión) de Izuku Midoriya OFA
- Actualizada visualición de daño en acción especial alpha (Golpe Metralla) de Katsuki Bakugô: daño individual por bala → daño total por tiro
- Ajustado porcentaje mínimo usado de la acción especial beta (Home Run Cometa) de Ochako Uraraka: ahora refleja el consumo total considerando la animación completa

### Fixed
- Corregidos datos de consumo de acción especial beta (Detroit Smash Quíntuple) de Izuku Midoriya OFA
## [1.2.0] - 2025-11-27
### Changed
- Refactorizado sistema de visualización de acciones especiales
- Mejora el formato y legibilidad para personajes con múltiples habilidades
### Fixed
- Corregidas discrepancias entre descripciones y comportamiento real de:
  - **Izuku Midoriya OFA**: 
    - Acción Especial - Actualización de texto desriptivo 
    - Don especial Alpha - Ajustar descripción para coincidir con mecánica real

