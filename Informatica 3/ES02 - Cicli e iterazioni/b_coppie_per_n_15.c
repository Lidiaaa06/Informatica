
/** ****************************************************************************************
* \mainpage a_divisori_di_un_n.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
* 
* @author Lidia Angelico
* @date 04/12/2022
 @version 1.0 04/12/22 Versione iniziale
*/

#include<stdio.h>
int main ()

{
    int n1;
    int n2;

    for(n1=1;n1<16;n1++)
    {
        n2=15-n1;
        printf("%d + %d e uguale a 15\n",n1,n2);
    }
    return 0;
}



