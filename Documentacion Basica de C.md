
# Documentación de Bibliotecas y Funciones en C

Esta documentación proporciona detalles sobre diversas bibliotecas y funciones en el lenguaje de programación C.

## Biblioteca `cs50.h`
La biblioteca `cs50.h` es específica del curso CS50 de la Universidad de Harvard y facilita la entrada de datos.

### Funciones de `cs50.h`
- **get_char**: Solicita al usuario un carácter.
- **get_double**: Solicita al usuario un número de tipo double.
- **get_float**: Solicita al usuario un número de tipo float.
- **get_int**: Solicita al usuario un número entero.
- **get_long**: Solicita al usuario un número entero largo.
- **get_string**: Solicita al usuario una cadena de texto.

## Biblioteca `ctype.h`
Proporciona funciones para probar y manipular caracteres.

### Funciones de `ctype.h`
- **isalnum**: Verifica si un carácter es alfanumérico.
- **isalpha**: Verifica si un carácter es alfabético.
- **isblank**: Verifica si un carácter es un espacio en blanco o una tabulación.
- **isdigit**: Verifica si un carácter es un dígito.
- **islower**: Verifica si un carácter está en minúscula.
- **ispunct**: Verifica si un carácter es un signo de puntuación.
- **isspace**: Verifica si un carácter es un espacio en blanco (espacio, tabulación, nueva línea).
- **isupper**: Verifica si un carácter está en mayúscula.
- **tolower**: Convierte un carácter a minúscula.
- **toupper**: Convierte un carácter a mayúscula.

## Biblioteca `math.h`
Ofrece funciones matemáticas.

### Funciones de `math.h`
- **ceil**: Calcula el techo de un número.
- **floor**: Calcula el piso de un número.
- **log2**: Calcula el logaritmo base-2 de un número.
- **pow**: Eleva un número a una potencia.
- **round**: Redondea un número al entero más cercano.
- **sqrt**: Calcula la raíz cuadrada de un número.

## Biblioteca `stdio.h`
Proporciona funciones de entrada y salida.

### Funciones de `stdio.h`
- **fclose**: Cierra un archivo.
- **fopen**: Abre un archivo.
- **fprintf**: Imprime en un archivo.
- **fread**: Lee bytes de un archivo.
- **fscanf**: Obtiene entrada de un archivo.
- **fwrite**: Escribe bytes en un archivo.
- **printf**: Imprime en la pantalla.
- **scanf**: Obtiene entrada del usuario.
- **sprintf**: Imprime en una cadena.

## Biblioteca `stdlib.h`
Incluye funciones para manejar la memoria y conversiones.

### Funciones de `stdlib.h`
- **atof**: Convierte una cadena a un float.
- **atoi**: Convierte una cadena a un entero.
- **atol**: Convierte una cadena a un largo.
- **free**: Libera memoria dinámicamente asignada.
- **malloc**: Asigna memoria dinámicamente.
- **random**: Genera un número pseudorandom.
- **realloc**: Reasigna memoria dinámicamente.
- **srandom**: Siembra la generación de números pseudorandom.

## Biblioteca `string.h`
Ofrece funciones para manipular cadenas.

### Funciones de `string.h`
- **strcasestr**: Localiza una subcadena.
- **strcmp**: Compara dos cadenas.
- **strcpy**: Copia una cadena.
- **strlen**: Calcula la longitud de una cadena.
- **strstr**: Localiza una subcadena.

## Biblioteca `strings.h`
Proporciona funciones adicionales para trabajar con cadenas.

### Funciones de `strings.h`
- **strcasecmp**: Compara dos cadenas ignorando mayúsculas/minúsculas.

## Biblioteca `time.h`
Relacionada con el manejo del tiempo.

### Funciones de `time.h`
- **time**: Obtiene el tiempo en segundos.
