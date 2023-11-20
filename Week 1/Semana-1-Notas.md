
# Introducción al Lenguaje C

## Programa Hola Mundo

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

- `#include <stdio.h>`: Incluye la biblioteca estándar de entrada y salida, necesaria para funciones como `printf`.
- `int main(void)`: Punto de entrada principal del programa. `int` indica que devuelve un entero, en este caso, el estado de salida.
- `printf("hello, world\n")`: Imprime la cadena de texto en la consola. `\n` es un carácter de nueva línea.
- Compila con `make hello` y ejecuta con `./hello`. `make` es una herramienta de construcción que simplifica el proceso de compilación.

## Funciones

- En C, `printf` muestra texto en pantalla. Forma parte de la biblioteca estándar (`stdio.h`) y se utiliza para la salida formateada.

## Variables

- Ejemplo: Pedir nombre al usuario y mostrarlo:

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("¿Cuál es tu nombre? ");
    printf("hola, %s\n", answer);
}
```

- `#include <cs50.h>`: Incluye la biblioteca CS50, que proporciona funciones adicionales como `get_string`.
- `string`: Tipo de dato para cadenas de texto, definido en la biblioteca CS50.
- `get_string`: Función de la biblioteca CS50 que solicita una cadena de texto al usuario.

## Condicionales

- Uso de condicionales para ejecutar código basado en condiciones.
- Ejemplo con `if`:

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("¿Cuál es x? ");
    int y = get_int("¿Cuál es y? ");

    if (x < y)
    {
        printf("x es menor que y\n");
    }
    // Agrega más condiciones aquí...
}
```

- `if`: Sentencia condicional que ejecuta el código entre llaves si la condición es verdadera.
- `int`: Tipo de dato para números enteros.

## Bucles

- Los bucles permiten repetir código.
- Ejemplo con `while`:

```c
#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("miau\n");
        i++;
    }
}
```

- `while`: Ejecuta repetidamente un bloque de código mientras la condición sea verdadera.
- `i++`: Incrementa el valor de `i` en 1.

## Linux y la Línea de Comandos

- Comandos básicos de Linux: `cd`, `cp`, `ls`, `mkdir`, `mv`, `rm`, `rmdir`. Son esenciales para la navegación y gestión de archivos en el sistema operativo.

## Mario

- Uso de bucles para crear patrones como en Super Mario Bros.
- Ejemplo de patrón:

```c
#include <stdio.h>

int main(void)
{
    // Código para patrones de Mario
}
```

- Este código podría usarse para generar patrones gráficos, imitando el diseño clásico del videojuego.

## Comentarios

- Importantes para explicar tu código. Usa `//` para añadir comentarios. Ayudan a otros desarrolladores a entender la lógica detrás del código.

## Abstracción

- Simplifica el código manejando problemas menores.
- Ejemplo: Crear funciones `get_size` y `print_grid` para modularizar el código.

## Operadores y Tipos

- Operadores en C: `+`, `-`, `*`, `/`, `%`.
- Tipos en C: `int` (enteros), `float` (decimales), `char` (caracteres), etc. Son fundamentales para la gestión de datos.

## Resumen

**Fuente**
[Notas de la Lección 1 de CS50x](https://cs50.harvard.edu/x/2023/notes/1/)
