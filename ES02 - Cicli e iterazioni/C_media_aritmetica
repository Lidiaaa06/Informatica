/** ****************************************************************************************
* \mainpage C_media_aritmetica.c
*
* @brief Si scriva un programma per calcolare la media aritmetica di una serie di numeri 
*        inseriti da tastiera. L’introduzione del valore 0 indica il termine del caricamento 
*        dei dati.
* 
* @author Lidia Angelico
* @date 05/12/2022
*/

#include <stdio.h>      

int main() 
{

	int n;
    int c=0;
	int somma=0;       
    float media=0;              

    do 
    {                                          
        printf("Insersici un numero: ");
        scanf("%d", &n);

        media += n;

        if(n!=0)
		{
            c++;
    	}		                                
    } 
	while (n!=0);                         

    media /= c;                 

    printf("\nLa media dei numeri e' %.2f\n", media);
}
