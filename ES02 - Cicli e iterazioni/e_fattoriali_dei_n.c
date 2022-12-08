/** ****************************************************************************************
* \mainpage e_fattoriale_dei_n.c
*
* @brief Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla 
*        tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato 
*        con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.
* 
* @author Lidia Angelico
* @date 07/12/2022
*/

#include <stdio.h>    

int main()  
{

    int n; 
	int cont;        

    printf("inserisci un numero: ");   
    scanf("%d", &n);

    if(n>0) 
	{                        
        for(cont=n-1; cont>0; cont--)
 		{
            n *= cont;                     
    }

        printf("\nIl fattoriale del numero inserito e' %d\n\n", n);     
    }
    else 
    {
        printf("\nNon e' possibile calcolare il fattoriale di un numero negativo\n\n");     
    }
}
