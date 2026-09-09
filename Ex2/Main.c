// Programme Factorielle
let cpt = 0;
let resultat = 1;

let n = parseInt(prompt("Saisir un nombre entier : "));

if (n < 0) {
    console.log("Le nombre saisi n’est pas valide");
}
else {
    while (n > 0) {
        resultat = resultat * n;
        n--;
    }
    console.log(resultat);
}