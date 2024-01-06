var personas= ["Pepe","Juan","Laura","Jimena","Cristina","Marley","Griselda"];
var res = document.getElementById("res");
var oficina = document.createElement("p");

function Mostrar(){
    oficina.innerHTML = personas[0];
    res.appendChild(oficina);
   
}

function Siguiente(){
    personas.shift();
    Mostrar();
}

function Agregar(){
    var nuevo = document.getElementById("agrega").value;
    personas.push(nuevo);
    Mostrar();
}