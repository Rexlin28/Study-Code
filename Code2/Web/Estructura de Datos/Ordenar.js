var arreglo = [5,2,11,24,8,3,13]; //Arreglo de Numeros
var arregloPersonas = [{ //Arreglo de personas
    nombre : "Raul",
    edad :21,
    genero : "M"
},{
    nombre : "Jimena",
    edad :18,
    genero : "F"
},{
    nombre : "Carlos",
    edad :24,
    genero : "M"
},{
    nombre : "Shrek",
    edad :34,
    genero : "M"
},{
    nombre : "Fiona",
    edad :35,
    genero : "F"
},{
    nombre : "Sofia",
    edad :14,
    genero : "F"
}];
console.log(arregloPersonas);

var miDiv = document.getElementById("ordenacion");
  

function cargar(){ //Imprimir en HTML
    miDiv.innerHTML= "";
    var ul = document.createElement("ul");
    miDiv.appendChild(ul);
    arreglo.forEach(dato => {
        var li = document.createElement("li");
        li.innerHTML = dato;
        ul.appendChild(li);
    
       });
}
cargar();


function Ordenar(){ //Ordenar numeros con bubbleSort
    let orde;
    for(let i=0; i<arreglo.length-1; i++){
        for(let j=0; j<arreglo.length-1; j++){
            if(arreglo[j]>arreglo[j+1]){
                orde = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = orde;
            }
        }
    }
   cargar();
}
function ordenarPersonas(){ // Ordenar edades con bubbleSort
    let orde;
    for(let i=0; i<arregloPersonas.length-1; i++){
        for(let j=0; j<arregloPersonas.length-1; j++){
            if(arregloPersonas[j].edad>arregloPersonas[j+1].edad){
                orde = arregloPersonas[j];
                arregloPersonas[j] = arregloPersonas[j+1];
                arregloPersonas[j+1] = orde;
            }
        }
    }
   console.log(arregloPersonas);
}

function desordenar(){ // Desordenar con puro swap
    let deso;
    let rand;
    let lenght = arreglo.length - 1;

    for(let i=0; i<arreglo.length; i++){
        deso = arreglo[i];
        rand = Math.floor(Math.random() * lenght);
        arreglo[i] = arreglo[rand];
        arreglo[rand] = deso;
    }
    cargar();
}