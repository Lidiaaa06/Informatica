/** ****************************************************************************************
* 
* @author Lidia Angelico
* @date 14/11/2023
*
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define V 10
#define T 10

struct data 
{
    int gg;
    int mm;
    int aa;
    
} typedef data;

struct studente 
{
    char cognome[N];
    data nascita;
    int voti[V];
    
} typedef studente;

void carica(char[]);

void stampa(char[]);

int conta(char[], char[]);

void stampaAlt(char[]);

int trovaPrimo(char[],char[]);

int trovaUltimo(char[],char[]);

int contaRecord(char[]);


int main()
{
    int r;

    srand(time(NULL));

    carica("studenti.dat");

    stampa("studenti.dat");

    r = conta("studenti.dat", "angelico");
    printf("\n Angelico: %d\n", r);

    stampaAlt("studenti.dat");
    
    r = trovaPrimo("studenti.dat","angelico");
     printf("\n Primo: %d\n", r);
    
	r = trovaUltimo("studenti.dat","angelico");
	 printf("\n Ultimo: %d\n", r);
	
	r = contaRecord("studenti.dat");
	 printf("\n n. record : %d\n", r);


    
}

void carica(char file[])
{
    studente s;
    
    FILE * fp = fopen(file, "ab");

    if(fp!=NULL){
        for(int i = 0; i<T; i++)
        {
            printf("Dati studente \n");
            
            printf("inserisci cognome: ");
            scanf("%s", s.cognome);

            s.nascita.gg = rand()%30+1;
            s.nascita.mm = rand()%12+1;
            s.nascita.aa = rand()%30+1990;

            for(int j = 0; j<V; j++) 
			{
                s.voti[j] = rand()%10+1;
            }
            fwrite(&s, sizeof(studente), 1, fp);
        }
    }
    fclose(fp);
}


void stampa(char file[])
{
    FILE * fp = fopen(file, "rb");
    
    studente s;
    
    if(fp!=NULL)
	{
        while(!feof(fp))
        {
            fread(&s, sizeof(studente), 1, fp);

            printf("\n\n Dati Studente \n\n");
            printf("cognome: %s\n", s.cognome);
            printf("data di nascita: %d/%d/%d\n", s.nascita.gg, s.nascita.mm, s.nascita.aa);
            printf("-voti-\n");
            for(int j = 0; j<V; j++){
                printf("%d\t", s.voti[j]);
            }
            printf("\n\n");
        }
    }
    fclose(fp);
}

int conta(char file[], char a[])
{
    FILE * fp = fopen(file, "rb");

    studente s;
    
    int c = 0;

    if(fp != NULL)
	{
        while(!feof(fp))
        {
            fread(&s, sizeof(studente), 1, fp);

            if(strcmp(s.cognome, a) == 0) 
			
			c++;
        }
    }
    fclose(fp);

    return c;
}

void stampaAlt(char file[])
{
    FILE * fp = fopen(file, "rb");
    
   studente s;
    
    int m = 0, max = 0, min = 0;

    if(fp!=NULL){
        while(!feof(fp))
        {
            fread(&s, sizeof(studente), 1, fp);

            printf("\n\n Dati Studente \n\n");
            
            printf("cognome: %s\n", s.cognome);
            for(int j = 0; j<V; j++)
            {
                m+=s.voti[j];

                if(max < s.voti[j])
				{
					 max = s.voti[j];
				}
				
                if(min > s.voti[j])
				{
					 min = s.voti[j];
				}
            }

            m/=V;

            printf("media voti: %d\n", m);
            printf("massimo dei voti: %d\n", max);
            printf("minimo dei voti: %d\n", min);

            printf("\n\n");
                
            m=0;
            max=0;
            min=10;
        }
    }
    fclose(fp);
}

int trovaPrimo(char file[], char cognome[])
{
    FILE * fp = fopen(file, "rb");

    studente s;
    int c=-1;

    if(fp!=NULL)
        while(!feof(fp))
        {
            fread(&s, sizeof(studente), 1, fp);

            if(strcmp(s.cognome, cognome)==0) 
            {
                c = ftell(fp) / sizeof(studente);
                break;
            }
        }

    return c;
    fclose(fp);
}

int trovaUltimo(char file[], char cognome[])
{
    FILE * fp = fopen(file, "rb");

	studente s;
    int c=-1;

    if(fp!=NULL)
        while(!feof(fp))
        {
            fread(&s, sizeof(studente), 1, fp);

            if(strcmp(s.cognome, cognome)==0) 
            {
                c = ftell(fp) / sizeof(studente);
            }
        }

    return c;
    fclose(fp);
}

int contaRecord(char file[])
{
    FILE * fp = fopen(file, "rb");

    int d = -1;

    if(fp!=NULL)
    {
        fseek(fp, 0, SEEK_END);
        d=ftell(fp);
    }

    return d/sizeof(studente);

}


