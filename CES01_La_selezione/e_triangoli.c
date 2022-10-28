/** ****************************************************************************************
* \mainpage e_triangoli.c
*
* @brief Scrivere un programma che, lette le misure dei lati di un triangolo, 
* 		 visualizzi se il triangolo è equilatero, isoscele o scaleno
* 
* @author Lidia Angelico
* @date 28/10/2022
*/

#include <stdio.h>

int main() 
{
	
	float a;
  float b;
  float c;
	
	printf("Inserisci il primo valore ");
	scanf("%f", &a);
  printf("Inserisci il secondo valore ");
  scanf("%f", &b);
  printf("Inserisci il terzo valore ");
  scanf("%f", &c);
  
  
	if (a==b || b==c || c==a )
		if (a==b && b==c)
			printf("E' un triangolo equilatero");
		else
			printf("E' un triangolo isoscele");
	else 
		printf("E' un triangolo scaleno");
}
