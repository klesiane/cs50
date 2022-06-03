#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //inserir as variaveis
    int altura;
    int linhas;
    int coluna;
    int espaço;

    do
    {
        //perguntar altura entre 1 e 8
        altura = get_int ("altura: ");
    }
    while (altura > 8 || altura < 1);

    for (linhas = 0; linhas < altura ; linhas++)
    {
        for (espaço = 0; espaço < altura - linhas - 1; espaço++)
        {
            printf(" ");
        }
        
        for (coluna = 0; coluna <= linhas; coluna++ )
        {
            printf("#");
        }
            printf ("\n");
    }
}
