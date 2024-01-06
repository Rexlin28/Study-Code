var list = ["Brandon", "Pedro", "Sofia", "Luis", "Esau"];
var list2 = [{
    name: "Brandon",
    pass: "123",
    age: 23
},{
    name: "Sofia",
    pass: "321",
    age: 21
},{
    name: "Raul",
    pass: "Hola",
    age: 30
},{
    name: "Jose",
    pass: "caca",
    age: 16
}]


function Show(){
    var lista = document.getElementById("lista");
    lista.innerHTML = "";
    for(let i = 0; i<list.length; i++){
        var li = document.createElement("li");
        li.innerHTML = list2[i].name;
        lista.appendChild(li);
    }
}

function agregar(){
    var nam = document.getElementById("name").value;
    var pas = document.getElementById("pass").value;
    var ag = document.getElementById("age").value;
}
function InsertarF(){
    agregar();
    list2.push({name: nam, pass: pas, age: ag});
    Show();
}

function InsertarP(){
    agregar();
    
    list2.unshift({name: nam, pass: pas, age: ag});
    Show();
}

function Eliminar(){
    agregar();
    alert(list2.pop().name);
    Show();
}
function Ordenar(){
    agregar();
    list2.sort();
    Show();
}
function OrdenarD(){
    agregar();
    list2.reverse();
    Show();
}

function buscar(){
    agregar();
    let objeto = list2.find(objeto => objeto.name === valor);
    document.getElementById("busca").innerHTML = "Nombre: "+objeto.name+" Pass: "+objeto.pass+" Age: "+objeto.age;
    
}