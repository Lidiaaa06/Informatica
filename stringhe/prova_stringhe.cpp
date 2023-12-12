/** ****************************************************************************************
* @author Lidia Angelico
* @date 25/09/2023
 @version 1.0 25/09/23 Versione iniziale
 @version 2.0 27/09/23 Versione finale
*/

#include<stdio.h>
#include<string.h>
#define R 10
#define C 10
void caricastringa(char [][C]);
void stampastringa(char [][C]);
int indicelunghezza(char [][C]);
void scambia(char m[][C], int, int);
int primaAlfabeto(char mats[][C]);
void ordina(char mats[][C]);
int main()
{	
	int a;
	
	char mats[R][C];
	
	caricastringa(mats);
	stampastringa(mats);
	a=indicelunghezza(mats);
	printf("\n\n%d",a);
	printf("\n\n la parola piu lunga e %s\n\n",mats[a]);
	scambia(mats,6,8);
	stampastringa(mats);
	a=primaAlfabeto(mats);
	ordina(mats);
}

//nella funzione si chiedano all’utente R stringhe di lunghezza massima C-1

void caricastringa(char mats[][C])
{
    for(int i=0;i<R;i++)
    {
    	printf("inserisci stringa \t");
		scanf("%s",mats[i]);
	}
}

//stampa sul monitor le stringhe seguite dalla loro lunghezza. Curare la visualizzazione su monitor

void stampastringa(char mats[][C])
{
	for(int i=0;i<R;i++)
	{
		printf("%s",mats[i]);
		printf("\n\n");
	}
}

// la funzione restituisce l’indice della riga dove è memorizzata la stringa più lunga e 
//visualizza nel main la stringa

int indicelunghezza(char mats[][C])
{
	int	max=0;	
	
	for(int i=0;i<R;i++)
	{
		if(strlen(mats[i])> strlen(mats[max]))
		{
			max=i;	
		}
	} return max;
}

/*nella funzione si scambiano tra di loro le stringhe di indice k e t .  
Eseguita la funzione la stringa della riga k+1 (indice k)  si trovi nella riga t+1 e 
quella della riga t+1 si trovi nella riga k+1 */

void scambia(char mats[][C], int k, int t) 
{
    char i[C];
    strcpy(i, mats[k]);
    strcpy(mats[k], mats[t]);
    strcpy(mats[t], i);
	
}

// la funzione restituisce l’indice della stringa che è la prima in ordine alfabetico

int primaAlfabeto(char mats[][C])
{
    int  c=0;

    for(int i = 1; i<R; i++)
    {
        if(strcmp(mats[c],mats[i])>0) 
		
		c=i;
    }
 
    return c;
}

// terminata l’esecuzione della funzione, tutte le stringhe sono in ordine alfabetico

void ordina(char mats[][C])
{
	for(int i=0;i<R-1;i++)
	for(int j=i+1;j<R;j++)
	{
		if(strcmp(mats[i],mats[j])>0)
		{
			scambia(mats,i,j);	
		}
	} 
}
