#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define R 5
#define C 5

int colonne;

void caricaMatriceRand(int [][C]);
void print(int [][C]);
void carica(int [][C]);
void stampaDiagonale(int [][C]);
int massimo(int [][C]);
int conta(int [][C], int);
int ricercaIndice(int [][C], int);
void scambia(int*, int* );
void scambiaRighe(int m[][C], int , int );
void ordinaRighe(int m[][C]);
void ordinaMatrice(int m[][C]);

int main()
{
	int a,n1,r;
	int n=12;
	
	
	srand(time(NULL));
	int valutazione[R][C];
	
	caricaMatriceRand(valutazione);
	/*print(valutazione);
	carica(valutazione);
	print(valutazione);
	stampaDiagonale(valutazione);
 	a=massimo(valutazione);
 	
 	printf("\n %d",a);
 	
 	a=conta(valutazione,n);
 	
 	printf("\n %d",a);
 	
	a=ricercaIndice(valutazione,n);
	
	if(colonne==-1)
	{
		printf("\n numero non trovato");
	}
	else
	{
		printf("\n la colonna e' %d  la riga e' %d",colonne,a);
	}
	  
	printf("inserisci le righe da scambiare:\n");
    scanf("%d%d", &r, &n1);

    printf("matrice prima:\n");
    print(valutazione);

    scambiaRighe(valutazione, r, n1);

    printf("matrice dopo:\n");
    print(valutazione);
    
    ordinaRighe(valutazione);
	print(valutazione);*/
	
	ordinaMatrice(valutazione);
	print(valutazione);
}

void caricaMatriceRand(int  m[][C])
{	
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			m[i][j]=rand() %41+10;
		}
	}
	
    
}
void print(int m[][C])
{
	int i,j;
	
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d\t",m[i][j]);
		}	
		printf("\n");
	}
}

void carica(int m[][C])
{
	int i,j;
	
	printf("scrivi i numeri da inserire \n");
	
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",& m[i][j]);
		}
	
	}
}

void stampaDiagonale(int m[][C])
{
	int i;
	
	for(i=0;i<R;i++)
	{
		printf("\n%d", m[i][i]);	
	}
}

int massimo(int m[][C])
{
	int i,j;
	int max=m[0][0];
		
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if (m[i][j]>max)
			{
				max=m[i][j];
			}
		}
	}
	return max;
}

int conta(int m[][C],int x)
{
	int i,j;
	int c=0;

	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
		  if(m[i][j]==x)
		    {
		    	c++;
			}	
		}
	}
	return c;	
}

int ricercaIndice(int m[][C],int x)
{
	int i,j;

	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(m[i][j]==x)
			{
			 colonne=j;
			
			 return i;
			}
		}
	}
	colonne=-1;
	return -1;
}
	
void scambia(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z; 
}

void scambiaRighe(int m[][C], int x, int y)
{
    for(int i = 0; i<C; i++)
    {
        scambia(&m[x][i], &m[y][i]);
    }
}

void ordinaRighe(int m[][C])
{
	int z;
	
	for(int n = 0; n <R; n++ )
	{	
		for(int i=0 ;i<C-1;i++)
		for(int j=i+1;j<C;j++)
		{
			if(m[n][i]>m[n][j])
			{
				z=m[n][i];
				m[n][i]=m[n][j];
				m[n][j]=z;
			}
			
		}
		
	}
}

void ordinaMatrice(int m[][C])
{
	int z;
	
	for(int i = 0; i <R; i++ )
	{
		for(int j = 0; j <C; j++ )	
		{
			if(i==R-1&&j==C-2)
			{
				i=R;
			}
			for(int c=0 ;c<R;c++)
			{
				for(int n=j+1;n<C;n++)
				{
					if (m[c][n]<m[i][j])
					{
						z=m[c][n];
						m[c][n]=m[i][j];
						m[i][j]=z;
					}
				}	
			}	
		}
	}
}

