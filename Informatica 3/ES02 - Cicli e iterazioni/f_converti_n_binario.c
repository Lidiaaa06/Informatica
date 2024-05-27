/** ****************************************************************************************
* \mainpage f_converti_n_binario.c
*
* @brief Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
*        L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit 
*        più significativo. Il programma dovrà visualizzare il numero decimale corrispondente. 
*        Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la 
*        libreria math.h.
* 
* @author Lidia Angelico
* @date 08/12/2022
*/

#include <stdio.h>     
#include <math.h>

int main()  
{

    int bit;
	int n=0;
	int cont=7;

    printf("inserisci 8 bit\n");    

    do{
        scanf("%d", &bit);        

        n += pow(2, cont) * bit;
		   
        cont--;                        
    } 
	while (cont>-1);                 

    printf("\nConversione in binario = %d\n", n);            
}
