var canciones = ["The Unforgiven", "Shine on you Crazy Diamond", "Fear of The Night", "The Ballad of The Bull", "Killer Queen"];
var reproductor = "";
var historial = [];


function RestartStack() { // Reinicia y vuelve a imprimir la pila de canciones
    var algo = document.getElementById("stack");
    var cosa;
    algo.innerHTML = "";
    for (let i = canciones.length - 1; i >= 0; i--) {
        cosa = document.createElement("li");
        cosa.innerHTML = canciones[i] + "<button onclick='Eliminar(" + i + ")' id='song#" + i + "'>Borrar</button>";
        algo.appendChild(cosa);
    };
}
function RestartHistory(){ // Reinicia y vuelve a imprimir el historial de las canciones
    var histo = document.getElementById("history");
    var hist;
    histo.innerHTML= "";
    historial.forEach( e => {
        hist = document.createElement("li");
        hist.innerHTML = e;
        histo.appendChild(hist);
    });
}

function Agregar() { // Agrega canciones que nosotros escribamos
    var nuevo = document.getElementById("agregar").value;
    if (nuevo) {
        canciones.push(nuevo);
    }
    RestartStack();
}


function Siguiente() { // Se reproducirá la canción siguiente de la pila
    var reproduccion = document.getElementById("reproduciendo");
    if (reproductor && canciones.length > 0) {
        historial.push(reproductor);
    }
    if (canciones.length > 0) {
        reproductor = canciones.pop();
        reproduccion.innerHTML = ("En reproducción: " + reproductor);
    } else { // Si no hay canciones en la pila, no reproduce nada
        reproduccion.innerHTML = ("En reproducción: ");
    }
    RestartStack();
    RestartHistory();
}

function Atras() { // Se reproducirá la canción anterior que está en el historial
    var reproduccion = document.getElementById("reproduciendo");
    if (reproductor) {
        if (historial.length > 0) {
            if (historial[historial.length - 1] !== reproductor) {
                canciones.push(reproductor);
            }
            reproductor = historial.pop();
            reproduccion.innerHTML = ("En reproducción: " + reproductor);
        } else { // Si ya no hay canciones anteriores en el historial, no reproduce nada
            reproduccion.innerHTML = ("En reproducción: ");
        }
    }
    RestartHistory();
    RestartStack();
}


function Eliminar(i) { // Elimina la canción de la pila
    if (i >= 0 && i < canciones.length) {
        canciones.splice(i, 1);
        RestartStack();
        RestartHistory();
    }
}