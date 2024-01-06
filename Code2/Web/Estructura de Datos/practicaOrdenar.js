var personas = [{
    nombre: "Carlos", ciudad: "Chihuahua", edad: 20
},{
    nombre: "Juan", ciudad: "Queretaro", edad: 18
},{
    nombre: "Sofia", ciudad: "Juarez", edad: 19
},{
    nombre: "Valeria", ciudad: "Chihuahua", edad: 21
},{
    nombre: "Laura", ciudad: "Chihuahua", edad:22
},{
    nombre: "Cristina", ciudad: "Juarez", edad: 19
},{
    nombre: "Sofia", ciudad: "Chihuahua", edad: 20
}];

var res = document.getElementById("resultado");
function nombracion(){
    var name = document.getElementById("nombre").value;
    var personaEncontrada = personas.find(persona => persona.nombre === name);

    if (personaEncontrada) {
        res.innerHTML = JSON.stringify(personaEncontrada);
    } else {
        res.innerHTML = "No se encontró ninguna persona con ese nombre.";
    }
};
function edades(){
    var age = document.getElementById("edad").value;
    var personasFiltradas = personas.filter(persona => persona.edad > parseInt(age));

    if (personasFiltradas.length > 0) {
        res.innerHTML = JSON.stringify(personasFiltradas);
    } else {
        res.innerHTML = "No se encontró ninguna persona con esa edad.";
    }
};

function ordenarPersonas(){ // Ordenar edades con bubbleSort
    let orde;
    for(let i=0; i<personas.length-1; i++){
        for(let j=0; j<personas.length-1; j++){
            if(personas[j].edad>personas[j+1].edad){
                orde = personas[j];
                personas[j] = personas[j+1];
                personas[j+1] = orde;
            }
        }
    }
   console.log(personas);
}