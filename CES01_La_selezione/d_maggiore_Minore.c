/** ****************************************************************************************
* \mainpage d_maggiore_Minore.c
*
* @brief  Scrivere un programma che, richiesti in ingresso tre valori interi distinti, ne determini il minore e il maggiore. 
* 
* @author Lidia Angelico
* @date 28/10/2022
*/

#include <stdio.h>

int main() {
	
  int a;
  int b;
  int c;	
  int max; 
  int min;	
  	
  printf("inserisci il primo numero ");		
  scanf("%d", &a);
  printf("inserisci il secondo numero ");
  scanf("%d", &b);
  printf("inserisci il terzo numero");
  scanf("%d", &c);
  
  
  if (a>b) {					
  	if (a>c) {									
  		max = a;								
  		if (c>b) {								
  			min = b;							
		  } else {								
		  	min = c;							
		  }										
	  } else {									
	  	max=c;									
	  	min=b;										
	  }											
  } else {						
  	if (b>c) {									
  		max = b;								
  		if (a>c) {								
  			min=c;								
		  } else {								
		  	min=a;								
			}									
	  } else {									
	  	max=c;									
	  	min=a;									
	  }											
  }													
  
  	
	printf("%d, %d", min, max);
	
}
