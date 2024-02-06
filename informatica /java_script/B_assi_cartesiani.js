m = parseInt(prompt("inserisci coefficiente m della retta y=mx+c"));
c = parseInt(prompt("inserisci coefficiente c della retta y=mx+c"));

console.log("Coordinata Y per ascissa -1 = " + (m * x) + c);
console.log("Coordinata Y per ascissa 10 = " + (m * x) + c);
console.log("Punto di intersezione con l'asse Y = " + (m * x) + c);
console.log("Punto di intersezione con l'asse X = " + (0 - c) / m);