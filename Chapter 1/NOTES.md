# Resumen: Introducción a C
**Fuente:** C Programming: A Modern Approach (Capítulo 1)

## 1. Historia 
El lenguaje C fue desarrollado a principios de los años 70 en **Bell Laboratories**. Su creación nació de una necesidad crítica del sistema operativo **UNIX**.

* **El origen:** Ken Thompson creó el sistema operativo UNIX (1969) originalmente en **Lenguaje Ensamblador** para una computadora específica (la DEC PDP-7).
* **La evolución:** Thompson intentó crear un lenguaje llamado **B** para facilitar el trabajo. Luego, **Dennis Ritchie** mejoró B, creando **New B** y finalmente **C**.
* **El Hito (1973):** UNIX fue reescrito completamente en C.

## 2. Problema (UNIX -> Procesadores  / Portabilidad)
Esta es la razón principal del éxito de C. Para entenderlo, hay que entender el problema del hardware de la época:

### El Problema (Antes de C)
Cada modelo de computadora (como la PDP-7 o la PDP-11) tiene un procesador diferente.
* Cada procesador "habla" su propio **Lenguaje Ensamblador**.
* El Ensamblador de la máquina A **no funciona** en la máquina B.
* **Consecuencia:** Si querían llevar UNIX de la PDP-7 a la nueva PDP-11, el código no servía. Tenían que **reescribir todo el sistema operativo desde cero** usando el ensamblador de la nueva máquina. Era como escribir el mismo libro dos veces en dos idiomas distintos.

### La Solución (Con C)
C actuó como un lenguaje universal de alto nivel.
* **Portabilidad:** Al reescribir UNIX en C, el código fuente se volvió independiente de la máquina.
* **Cómo funciona:**
    1. Se escribe el código de UNIX en C (una sola vez).
    2. Para poner UNIX en la Computadora A, se usa un **Compilador de C** diseñado para A.
    3. Para poner UNIX en la Computadora B, se usa un **Compilador de C** diseñado para B.
* **Resultado:** El compilador se encarga de traducir C al lenguaje complejo de cada procesador. Los programadores ya no tienen que preocuparse por qué máquina están usando.

## 3.  Estandarización (Evolución/Solución)
En la década de 1970 y 1980, C creció más allá de UNIX y empezó a usarse en muchas computadoras nuevas (como las IBM PC). Esto trajo un problema grave.

### Fase 1: El Estándar (K&R) - 1978
Al principio no había un estándar oficial. La única referencia era el libro **"The C Programming Language"** de Brian Kernighan y Dennis Ritchie.
* Fue conocido como la "Biblia de C" o **K&R**.
* **El Problema:** El libro no era perfecto. Dejaba algunas reglas "borrosas" o ambiguas. Además, no distinguía bien qué funciones eran propias de C y cuáles eran del sistema UNIX.

### Fase 2: El Caos de los Dialectos
Como el libro K&R no era preciso en todo, los programadores que creaban compiladores para nuevas máquinas tuvieron que "adivinar" o improvisar cómo debían funcionar ciertas características.
* Esto creó **Dialectos**: El C de una máquina funcionaba ligeramente distinto al C de otra.
* **El Riesgo:** Esto amenazaba la **portabilidad** (la mayor fortaleza de C). Si el lenguaje se fragmentaba en dialectos incompatibles, C perdería su utilidad universal.

### Fase 3: La Solución (ANSI C) - 1989
Para evitar que el lenguaje se rompiera, el **Instituto Nacional Americano de Estándares (ANSI)** intervino para crear una ley universal.
* El objetivo era definir el lenguaje de forma precisa para eliminar ambigüedades.
* En **1989** se aprobó el estándar **ANSI C** (también llamado C89 o C90 al ser adoptado por ISO).
* Esto aseguró que un programa en C escrito bajo este estándar funcionara igual en cualquier compilador.

### Fase 4: Evolución (C99)
Años después, en 1999, el lenguaje se actualizó nuevamente (**C99**) para agregar nuevas características y mantenerse moderno, pero ANSI C89 sigue siendo la base sólida que unificó todo.

## 4. Por qué aprender C (Lenguajes basados en C)
C es el "padre" de la sintaxis moderna.
* **Familia C:** C++, Java, C#, y Perl derivan de C. Aprender C facilita dominar estos lenguajes después.
* **Uso Actual:** Se sigue usando para sistemas operativos, drivers y dispositivos embebidos (donde hay poca memoria) por su eficiencia y control