#include <stdio.h>
#include <cs50.h> 

int main(void)
{
     int pop_inicial;
     int pop_final;
     
     //pedir do usuario o nnúmero inicial de ilhamas
     do 
     {
       pop_inicial = get_int ("população inicial de ilhamas: "); 
     }
     while (pop_inicial < 8);
     
     ///pedir do usuario o nnúmero final de ilhamas
     do
     {
         pop_final = get_int ("população final de ilhamas: ");
     }
     while (pop_final < pop_inicial);
     
     //calcular a quantidade de anos
     
     int anos;
     
     for (anos = 0; pop_inicial < pop_final; anos++)
     
     {
         int natalidade = pop_inicial/3;
         int mortalidade = pop_inicial/4;
         pop_inicial = pop_inicial + natalidade - mortalidade;
     }
     
     //resultado final
     {
         printf ("anos: %i \n", anos);
     }
     
}
