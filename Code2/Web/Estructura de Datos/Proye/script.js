// Hacer pedidos de restaurante con listas, colas y pilas, donde cada nodo es un pedido y cada pedido tiene una lista de platos, ademas de un historial de pedidos anteriores
var pedidos = [];
var platos = [];
var historial = [];

class Nodo {
    constructor(nombre, pedido, historial) {
        this.nombre = nombre;
        this.pedido = pedido;
        this.historial = historial;
    }
}


function agregarPedido() {
    var nombre = document.getElementById("nombre").value;
    var pedido = document.getElementById("pedido").value;
    var historial = document.getElementById("historial").value;
    var nodo = new Nodo(nombre, pedido, historial);
    pedidos.push(nodo);
    console.log(pedidos);
}

function agregarPlato() {
    var nombre = document.getElementById("nombre").value;
    var plato = document.getElementById("plato").value;
    var nodo = new Nodo(nombre, plato);
    platos.push(nodo);
    console.log(platos);
}

function borrarPedido() {
    pedidos.pop();
    console.log(pedidos);
}

function borrarPlato() {
    platos.pop();
    console.log(platos);
}

function agregarHistorial() {
    var nombre = document.getElementById("nombre").value;
    var historial = document.getElementById("historial").value;
    var nodo = new Nodo(nombre, historial);
    historial.push(nodo);
    console.log(historial);
}

function mostrar() {
    document.getElementById("pedidos").innerHTML = pedidos;
    document.getElementById("platos").innerHTML = platos;
    document.getElementById("historial").innerHTML = historial;
}

