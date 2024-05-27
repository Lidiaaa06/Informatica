tabella = document.createElement("table") //Crea una tabella

for (i = 1; i < 11; i++) 
{

    riga = document.createElement("tr") //Crea una riga

    for (j = 1; j < 11; j++)
    {
        
        casella = document.createElement("td")//Crea una casella
        
        casella.innerHTML = i * j //Inserisce il risultato della moltiplicazione nella casella
        riga.appendChild(casella)//Aggiunge la casella alla riga
    }

    if (i % 2 == 1) riga.setAttribute("class", "evidenziato") //Aggiunge la classe evidenziato alle righe dispari
    
    tabella.appendChild(riga) //Aggiunge la riga alla tabella
}

document.body.appendChild(tabella)