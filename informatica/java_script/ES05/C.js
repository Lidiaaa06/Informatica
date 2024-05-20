arrayPulsanti = document.getElementsByTagName("button") //Crea un array con tutti i pulsanti

for (i of arrayPulsanti) //scorre tutti i pulsanti
{
    i.setAttribute("class", "pulsanti")//Aggiunge la classe pulsanti a tutti i pulsanti
}