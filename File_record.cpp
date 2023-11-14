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

void crea(char[]);

void stampa(char[]);

int conta(char[], char[]);

void stampaAlt(char[]);


int main()
{
    int r;

    srand(time(NULL));

    crea("studenti.dat");

    stampa("studenti.dat");

    r = conta("studenti.dat", "Angelico");
    printf("\n angelico: %d\n", r);

    stampaAlt("studente.dat");
    
}

void crea(char file[])
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

            for(int j = 0; j<V; j++) {
                
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
    
    if(fp!=NULL){
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

int conta(char file[], char z[])
{
    FILE * fp = fopen(file, "rb");

    studente s;
    
    int c = 0;

    if(fp != NULL){
        while(!feof(fp))
        {
            fread(&s, sizeof(studente), 1, fp);

            if(strcmp(s.cognome, z) == 0) 
			
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
        }
    }
    fclose(fp);
}
