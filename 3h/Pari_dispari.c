#include<stdio.h>
int Pari_Dispari(int,int);
int main()
{
	int a,b;
	
	a= Pari_Dispari(a,b);
	printf("i numeri pari sono  %d \n",a);
	printf("i numeri dispari sono  %d",b);	
	
}
int Pari_Dispari(int pari,int dispari)
{
	int n;
	
	do
	{
		printf("inserisci dei numeri ");
		scanf("%d",&n);
	    if (n%2==0)
		{
			pari+=1;
		} 
	    else
	    {
	    	dispari+=1;
		}
	}
	 while (n!=999);
	return pari;
	return dispari;
}
