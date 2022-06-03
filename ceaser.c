#include <stdio.h>
#include <cs50.h> 
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
   //argc = numero de argumentos 
   //argv = lista de argumentos 
   if (argc != 2)
   {
       printf ("Usage: ./ceaser chave\n");
       return 1;
   }
   
   for (int i = 0, chave_tam = strlen(argv[1]); i < chave_tam; i++)
   {
       if (!isdigit (argv[1][i]))
       {
           printf("Chave deve ser um número valido");
           return 1;
       }
   }
   
   int chave = atoi(argv[1]);
   
   //pedir do usuário o texto
    string texto_inicial = get_string ("texto sem formatação: ");
    printf("texto criptografado: ");
     
    for (int i = 0, texto_tam = strlen(texto_inicial); i < texto_tam; i++)
    {
        char letra = texto_inicial[i];
        
        if (isalpha(letra))
        {
             char começo;
             if (islower(letra))
             {
                 começo = 'a';
             }
             else
             {
                 começo = 'A';
             }
             letra = ((letra - começo + chave) % 26) + começo;
        }
        
        printf("%c", letra);
    }
    
   printf("\n");
}
