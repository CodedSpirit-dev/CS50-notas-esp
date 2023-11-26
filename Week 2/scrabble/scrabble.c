#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Puntos asignados a cada letra del alfabeto
// Un arreglo que almacena los puntos asignados a cada letra del alfabeto
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Prototipo de la función
int compute_score(string word);

int main(void)
{
    // Obtener palabras ingresadas por ambos jugadores
    // Solicita al primer jugador que ingrese una palabra y guárdala en la variable word1
    string word1 = get_string("Jugador 1: ");
    // Solicita al segundo jugador que ingrese una palabra y guárdala en la variable word2
    string word2 = get_string("Jugador 2: ");

    // Calcular la puntuación de ambas palabras
    // Llama a la función compute_score pasando word1 como argumento y almacena el valor devuelto en score1
    int score1 = compute_score(word1);
    // Llama a la función compute_score pasando word2 como argumento y almacena el valor devuelto en score2
    int score2 = compute_score(word2);

    // Imprimir el ganador
    // Compara las puntuaciones de los jugadores e imprime el mensaje correspondiente
    if (score1 > score2) {
        printf("¡Jugador 1 gana!\n");
    }
    else if (score2 > score1) {
        printf("¡Jugador 2 gana!\n");
    } else {
        printf("¡Empate!\n");
    }
}

// Función para calcular la puntuación de una palabra
// Recibe una cadena como entrada y devuelve un entero
int compute_score(string word)
{
    // Calcular y devolver la puntuación para la cadena
    // Inicializa la puntuación en 0
    int score = 0;

    // Iterar sobre cada carácter en la palabra
    for (int i = 0; i < strlen(word); i++) {
        // Verificar si el carácter es mayúscula
        if (isupper(word[i])) {
            // Si lo es, suma los puntos correspondientes al score accediendo al arreglo POINTS usando el valor ASCII del carácter menos 'A'
            score += POINTS[word[i] - 'A'];
        }
        // Verificar si el carácter es minúscula
        else if (islower(word[i])) {
            // Si lo es, suma los puntos correspondientes al score accediendo al arreglo POINTS usando el valor ASCII del carácter menos 'a'
            score += POINTS[word[i] - 'a'];
        }
        // Si el carácter no es ni mayúscula ni minúscula, no se suma nada al score
        else {
            score += 0;
        }
    }

    // Devuelve la puntuación calculada
    return score;
}
