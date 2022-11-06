/** ****************************************************************************************
* \mainpage <Sconto_Spesa.C>
*
* @brief 
* 
* @author Lidia Angelico
* @date 6/11/22
* @version 1.0 6/11/22 Versione iniziale
*/


#include<stdio.h>

int main ()
{
	if (importo < 80)
    {
        if (importo < 65)
        {
            if (importo < 50)
            {
                importo = importo / 100 * 95;
            }
            else
            {
                importo = importo / 100 * 94;
            }
        }
        else
        {
            importo = importo / 100 * 93;
        }
    }
    else
    {
        importo = importo / 100 * 90;
    }
}
