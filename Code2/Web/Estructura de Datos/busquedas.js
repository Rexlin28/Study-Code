const personas = [{
    nombre: "Gus",
    edad: 21
},{
    nombre: "Fer",
    edad: 17
},{
    nombre: "Johana",
    edad: 20
},{
    nombre: "Brandon",
    edad: 24
},{
    nombre: "Carla",
    edad: 28
}];
var res = document.getElementById("resultado");

function nombracion(){
    var form = document.getElementById("nombracion");
    var name = document.getElementById("nombre").value;
    res.innerHTML = (personas.find(personas => personas.nombre===name));
};
function edades(){
    var form = document.getElementById("edades");
    var age = document.getElementById("edad").value;
    console.log(personas.filter(personas => personas.edad >19));
};

