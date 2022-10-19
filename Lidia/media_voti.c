#include <stdio.h>
int main()
{
float voto1,voto2,voto3;
float media;
printf("inserisci il primo voto ");
scanf("%f",&voto1);
printf("inserisci il secondo voto ");
scanf("%f",&voto2);
printf("inserisci terzo voto ");
scanf("%f",&voto3);
media= (voto1+voto2+voto3) /3;
printf("media dei voto : \t %f",media);
return 0;
}
