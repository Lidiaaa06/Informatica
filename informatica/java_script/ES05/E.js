tabella = document.createElement("table") //crea una tabella

for (i = 1; i < 11; i++) 
{

    riga = document.createElement("tr") //crea una riga

    for (j = 1; j < 11; j++) 
    {

        
        casella = document.createElement("td") // crea una casella

        casella.innerHTML = i * j //inserisce il risultato della moltiplicazione nella casella
        riga.appendChild(casella) //Aggiunge la casella alla riga
    }
    
    tabella.appendChild(riga) //Aggiunge la riga alla tabella
}

document.body.appendChild(tabella) //Aggiunge la tabella a tutto il documento