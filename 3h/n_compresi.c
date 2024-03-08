#include<stdio.h>
int n_compresi(int );

int main()
{
	int a;
	a=n_compresi(a);
	printf("%d ",a);
}

int n_compresi(int a)
{

	int N;
	
	printf("inserisci un numero ");
	scanf("%d",& N);
	
	for(int i=2;i<N;i++)
	{
		printf("%d \n",i);
	}
	
}