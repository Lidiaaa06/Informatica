tabella = document.createElement("table")

for (i = 1; i < 11; i++) 
{

    riga = document.createElement("tr")

    for (j = 1; j < 11; j++) 
    {
        
        if (i == 1 || j == 1) casella = document.createElement("th")
        else casella = document.createElement("td")
        
        casella.innerHTML = i * j
        riga.appendChild(casella)
    }

    if (i % 2 == 1) riga.setAttribute("class", "evidenziato") //Aggiunge la classe evidenziato alle righe dispari
    
    tabella.appendChild(riga)
}

document.body.appendChild(tabella)