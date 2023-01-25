/** ****************************************************************************************
* \mainpage a_divisoreNumero.c
*
* @brief Scrivere un programma in C contenga piu funzioni  
* 
* 
* @author Lidia Angelico
* @date 13/01/2022
*/

#include<stdio.h>
#include<stdlib.h>

/* scrivere una funzione chiamata "mcd" che prende in input due numeri interi e
restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide.*/
int MCD (int,int);

/*	Scrivere una funzione chiamata "somma_divisori" 
	che prende in input un numero intero e restituisce la somma dei suoi divisori.*/
	
	int somma_divisori(int);
	
/*Scrivere una funzione chiamata "area_rettangolo" 
che prende in input la base e l'altezza di un rettangolo e restituisce l'area. */
 
int area_rettangolo(int,int);

/*Scrivere la funzione “int menu()” che visualizzi un menù e che chieda all’utente un numero corrispondente
 all’operazione eseguire, 0 per uscire. Restituendo tale valore al termine.*/

int menu();

int main()
{
	int r;
	int n1,n2;
	int c=0;
	
	while(1)
	{
		
		r=menu();
		
		switch(r)
		{
			
			
			case 1: printf("inserisci due numeri\n ");
					scanf("%d%d",& n1,&n2);
					
					r=MCD(n1,n2);
			    	printf("l'MCD e'%d\n",r);
			    	break;
			    	
			case 2: printf("inserisci un numero \n");
					scanf("%d",& n1);
					r=somma_divisori(n1);
					printf("la somma divisori e' %d\n",r);
					break;
					
			case 3: printf("inserisci 2 numeri \n");
					scanf("%d%d",& n1,& n2);
					 r=area_rettangolo(n1,n2);
					printf("%d\n",r);
					break;
					
			case 0: c=1; 
					break; 
			
			default: printf ("hai sbagliato");
		}system("pause");
		if(c)
			break;
	} 

}

int MCD(int x,int y)
	{
		int r=0;
		
		while(y!=0)
		{
			r=x%y;
			x=y;
			y=r;
		}
		return x;
	}
	
	
	int somma_divisori(int x)
	{
		int cont;
		int r=0;
		
		for(cont= 1; cont <= x; cont++)		
	{
		if(x%cont==0)
		
		r=r+cont;
	}
	return r;
	}

	int area_rettangolo(int x,int y)
	{
		int r;
		
		r=x*y;
		
		return r;
	}	

	int menu()
	{
	  
	  	system("cls");
	  	
	  	
		int D;
		 
		printf (" scrivi 1 per mcd \n scrivi 2 per somma divisori \n scrivi 3 per area rettangolo \n scrivi 0 per uscire \n \n");
		scanf("%d",&D);
		
		return D;
		
		}	
