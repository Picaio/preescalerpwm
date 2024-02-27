# Configuración de Preescalador de Registros Timer 2 de Arduino Uno para PWM 🕒🔧

Este proyecto proporciona una guía sobre cómo configurar el preescalador de los registros Timer 2 del Arduino Uno para generar señales PWM (modulación por ancho de pulso). La configuración del preescalador afecta la frecuencia de la señal PWM generada, lo que puede ser útil para controlar dispositivos como motores, luces LED y otros componentes.

## Descripción 🛠️

El proyecto incluye información sobre cómo configurar el preescalador de los registros Timer 2 del Arduino Uno para generar señales PWM con diferentes frecuencias.

## Componentes Necesarios 📦

- Arduino Uno o compatible
- Cable USB para conectar el Arduino al ordenador
- Componentes adicionales según el proyecto específico (por ejemplo, motores, luces LED, etc.)

## Uso 📝

1. **Configuración del Código:** Abre el código en el entorno de desarrollo de Arduino (IDE) y utiliza las funciones `TCCR2B` y `OCR2A` para configurar el preescalador y el valor de comparación (duty cycle) respectivamente.

2. **Selección del Preescalador:** El preescalador determina la frecuencia de la señal PWM. Puedes seleccionar diferentes valores del preescalador (1, 8, 32, 64, 128 o 256) dependiendo de tus necesidades. Por ejemplo, para un preescalador de 64, la frecuencia de la señal PWM se calcularía como: Frecuencia_PWM = F_CPU / (64 * Valor_Comparación).

3. **Carga del Código:** Carga el código en el Arduino Uno utilizando el IDE de Arduino y observa la señal PWM generada en los pines correspondientes.

## Contribuciones 🚀

¡Contribuciones son bienvenidas! Si tienes ideas para mejorar los archivos STL, Gerber o cualquier otra parte del proyecto, no dudes en abrir un "issue" o enviar un "pull request".

## Créditos 🙌

Este proyecto fue creado por PICAIO SAS y está inspirado en proyectos similares de la comunidad de Arduino y impresión 3D.

## Licencia 📝

Este proyecto está bajo la licencia [MIT](LICENSE).
