#include <stdio.h>
#include <cs50.h> 
#include <string.h>
#include <ctype.h>
#include <math.h>

int main (void)
{
   //pedir do usuário o texto
    string texto = get_string("texto: ");

    int letras = 0;
    int palavras = 1;
    int frases = 0;

    int lenghtexto = strlen(texto);
    for (int i = 0; i < lenghtexto ; i++ )
    {
        char character = texto[i];
        
        if (isalpha(character))
        {
            letras++;
        }
        
        else if (character == ' ')
        {
            palavras++;
        }
        
        else if (character == '.' || character == '!'|| character == '?')
        {
            frases++;
        }
    }
    
    printf("%i letra(s)\n", letras);
    printf("%i palavra(s)\n", palavras);
    printf("%i frase(s)\n", frases);
    
    //índice = 0,0588 * L - 0,296 * S - 15,8
    
    float L = (float)letras * 100 / (float)palavras;
    float F = (float)frases * 100 / (float)palavras;
    int índice = round(0.0588 * L - 0.296 * F - 15.8);
    printf ("índice: %i\n", índice);

    if (índice >= 16)
    {
        printf ("Série 16+\n");
    }
   
    else if (índice < 1)
    {
        printf ("Antes da série 1\n");
    }
    
    else 
    {
        printf ("Série %i\n", índice);
    }
}
