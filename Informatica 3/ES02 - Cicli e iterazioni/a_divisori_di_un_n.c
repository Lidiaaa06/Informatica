/** ****************************************************************************************
* \mainpage a_divisori_di_un_n.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author Lidia Angelico
* @date 04/12/2022
 @version 1.0 04/12/22 Versione iniziale
*/

#include <stdio.h>		

int main() 
{
	int n; 
  int cont;			
	
	printf("Inserisci un numero: ");	
	scanf("%d", &n);
	
	for(cont = 2; cont < n; cont++)		
	{
		if(n%cont==0)								
			printf("%d e un divisore\n", cont);		
	}	
}
