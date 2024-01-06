let caca;
var surrador = false;
const mojon=true;

surrador = "Mojon";

var recursivo=0;
var cadena = "Cadena";
var entero = 15;
var bool = true;
var freno = 10;

let local = "Variable local";

const constante = 80;
var div1;
document.write(local);
console.log(entero);

function ejecutar(){
    for(let i=0; i<entero; i++){
        console.log(i);
        div1 = document.getElementById("primero");
        div1.innerHTML = "Entro";
    }
}

function muestra(){
    div1.innerHTML = "algo";
}
function contar(){
    for(let i=0; i<entero; i++){
        var lista = document.createElement("p");
        lista.innerHTML = i;
        div1.appendChild(lista);
    }
   
}

function recursividad(){
    var lista = document.createElement("p");
    lista.innerHTML = recursivo;
    div1.appendChild(lista);
    recursivo = recursivo+3;
    if(freno>0){
        freno--;
        recursividad();
    }else{
        freno = 10;
        recursivo=0;
    }
}
