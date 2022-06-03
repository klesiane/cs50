#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //inserir variaveis
    float valor;

    do
      {
         //perguntar o valor 
         valor = get_float ("valor recebido: ");
      }
     while (valor <= 0);
     
     int centavos = round (valor*100);
     int moedas = 0;
     
     while (centavos >= 25)
     { 
         centavos -= 25;
         moedas++;
     }
     
     while (centavos >= 10)
     { 
         centavos -= 10;
         moedas++;
     }
     
     while (centavos >= 5)
     { 
         centavos -= 5;
         moedas++;
     }
     
     while (centavos >= 1)
     { 
         centavos -= 1;
         moedas++;
     }
     
     printf ("você irá necessitar de no minimo %i moedas \n", moedas );
}
