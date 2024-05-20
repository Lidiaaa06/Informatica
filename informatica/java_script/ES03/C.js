n1 = parseInt(prompt("inserisci il primo numero"))

segno = prompt("inserisci un'operazione matematica tra +, -, /, *, **")

n2 = parseInt(prompt("inserisci il secondo numero"))

risultato = null

if(Number.isNaN(n1) || Number.isNaN(n2))
{
    alert("uno dei numeri inseriti non è valido")
}

else
{
    switch (segno) {

        case "+":
            risultato = n1 + n2
            break

        case "-":
            risultato = n1 - n2
            break

        case "/":
            risultato = n1 / n2
            break

        case "*":
            risultato = n1 * n2
            break

        case "**":
            risultato = n1 ** n2
            break

        default:
            alert("Errore: operazione non in lista")
    }

    if(risultato != null){
        alert(`risultato: ${risultato}`)
    }
}