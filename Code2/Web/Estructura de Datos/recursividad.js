var recursivo = 0;
var freno = 10;
var div1;

function ejecutar(){
        div1 = document.getElementById("primero");
        div1.innerHTML = "Entro";
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