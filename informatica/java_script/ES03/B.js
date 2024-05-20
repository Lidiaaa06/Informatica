libro = //oggetto libro
{
    Titolo: "Informatica", //indice e informazione
    Autore: "Vetromile",
    AnnoDiPubblicazione: "2012",
    Genere: "Scolastico",
    NumeroDiPagine: "389"
}

for (i in libro) // scorre indice 
{
    console.log(`${i}:  ${libro[i]}`);
}