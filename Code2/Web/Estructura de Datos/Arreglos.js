var arreglo = ["Jose", "Diana", "Arturo", "Jaime"];
console.log(arreglo);

var enteros = [5,52,123,52,12];

var objeto = {
    nombre: "jose",
    edad: 15,
    estatura : 1.65
}
console.log(objeto.estatura);

var AO= [
    {especie : "perros", raza : "labrador", edad: "5"},
    {especie : "gato", raza : "michi", edad: "9"},
    {especie : "tigre", raza : "bengalas", edad: "43"}
]

function mostrar(){
    var lista = document.getElementById("lista");
   /*for(let i=0; i<arreglo.length; i++){
    var li = document.createElement("li");
    li.innerHTML = arreglo[i];
    lista.appendChild(li);
   }*/
   arreglo.forEach(dato => {
    var li = document.createElement("li");
    li.innerHTML = dato;
    lista.appendChild(li);

   })
    
}

function sumador(){
    var lista = document.getElementById("lista");
    var para = document.createElement("h1");
    var num = 0;
    for(let i=0; i<enteros.length; i++){
        num+= enteros[i];
    }
    console.log(num);
    para.innerHTML = num;
    lista.appendChild(para);
}

function tablar(){
    var tabla = document.getElementById("tablita");
    
    AO.forEach( animal => {
        var tr = document.createElement("tr");
        var td1 = document.createElement("td");
        var td2= document.createElement("td");
        var td3 = document.createElement("td");
        td1.innerHTML = animal.especie;
        td2.innerHTML = animal.raza;
        td3.innerHTML = animal.edad;

        tr.appendChild(td1);
        tr.appendChild(td2);
        tr.appendChild(td3);
        
        tabla.appendChild(tr);
    });

    
}
function buscar(){
    console.log(AO[1].especie);
}