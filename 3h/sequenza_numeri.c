int main()
{
    int a;
    a= numeri(a);
    printf("numeri inseriti %d \n",a);
   
}
 
int numeri(int n)
{
    int c=0;
    int somma=0;
	
	do
	{
    	printf("inserisci un valore ");
    	scanf("%d",& n);
    	
	    if(n!=0)
	    {
	    	c++;
	    	somma+=n;
		}
		
	}while(n!=0);
	return c;
}
