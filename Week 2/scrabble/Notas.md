---
# Explicación del Código en C para Calcular Puntuación de Palabras

Este código en C está diseñado para calcular la puntuación de palabras ingresadas por dos jugadores, basándose en un sistema de puntos predefinido para cada letra del alfabeto. Se utiliza en un entorno de competición donde dos jugadores ingresan palabras y el programa calcula quién tiene la puntuación más alta.

## Funciones y Elementos del Código

### Array de Puntos
`int POINTS[] = {1, 3, 3, 2, 1, 4, ...};`  
Este array almacena los puntos asignados a cada letra del alfabeto. Por ejemplo, 'A' vale 1 punto, 'B' vale 3 puntos, etc.

### Prototipo de Función
`int compute_score(string word);`  
Declara el prototipo de la función `compute_score`, que se utiliza para calcular la puntuación de una palabra ingresada.

### Función Principal `main`
La función `main` realiza las siguientes tareas:
1. Obtiene palabras de los jugadores usando `get_string` de la biblioteca `cs50.h`.
2. Calcula la puntuación de cada palabra llamando a la función `compute_score`.
3. Determina y muestra el ganador o si hay un empate.

### Función `compute_score`
Calcula la puntuación de una palabra dada. Usa las siguientes funciones de C:
- `strlen`: Para obtener la longitud de la palabra.
- `isupper` y `islower`: Para verificar si un carácter es mayúscula o minúscula.
- Acceso a array `POINTS` para obtener los puntos de cada letra.

Cada letra en la palabra se verifica para determinar si es mayúscula o minúscula, y luego se suma su valor correspondiente en el array `POINTS` a la puntuación total. Esta puntuación se devuelve al final de la función.

### Funciones de la Biblioteca Estándar de C
- `printf`: Utilizada para imprimir mensajes y resultados en la consola.
- `isupper` y `islower`: Parte de `<ctype.h>`, se usan para verificar si un carácter es mayúscula o minúscula, respectivamente.
- `strlen`: Parte de `<string.h>`, se utiliza para obtener la longitud de una cadena de caracteres.
----