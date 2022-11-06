/** ****************************************************************************************
* \mainpage <Temperatura.c>
*
* @brief
* 
* @author Lidia Angelico
* @date 6/11/22
* @version 1.0 6/11/22 Versione iniziale
*/

#include <stdio.h>

int main()
{
    int t;

    printf("Inserisci il valore della temperatura: ");
    scanf("%d", &t);

    if (t > 30)
    {
        printf("Molto caldo");
    }
    else
    {
        if (t > 20)
        {
            printf("Caldo");
        }
        else
        {
            if (t > 10)
            {
                printf("Ideale");
            }
            else
            {
                if (t > 0)
                {
                    printf("Freddo");
                }
            }
        }
    }
}
