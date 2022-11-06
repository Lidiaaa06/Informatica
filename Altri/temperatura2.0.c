/** ****************************************************************************************
* \mainpage <Temperatura.c>
*
* @brief
* 
* @author Lidia Angelico
* @date 6/11/22
* @version 2.0 6/11/22 Versione iniziale
*/

#include <stdio.h>
int main ()

{
	int t;

	printf("inserisci il valore della temperatura: ");
	scanf("%d",&t);
	
	if (t>30)
	{ 
		printf("Molto Caldo");
	}
	else 
	{
		if (20>t&&t<30)
		{
			printf("Caldo");
		}
		else
		{
			if (10>t&&t>20)
			{
				printf("Ideale");
			}
			else
			{
				if (0<t&&t<10)
				{
					printf("Freddo");
				}
			
			}
		}
	}
}
