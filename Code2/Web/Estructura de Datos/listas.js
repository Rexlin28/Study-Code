var array = ["Tsuru","Civic","Sentra","Chevy"];

function Show(){
    var lista = document.getElementById("lista");
    lista.innerHTML = "";
    for(let i=0; i < array.length; i++){
        var li = document.createElement("li");
        var input= document.createElement("input")
        li.innerHTML = array[i];
        inputbutton = addEventListener("click",function(){
           Borrar3(i);
        });
        li.appendChild(input);
        lista.appendChild(li);
        
    }
}

function Agregar(){
    var carro = document.getElementById("car").value;
    array.push(carro);
    Show();
}

function Borrar(){
    array.pop();
    Show();
}

function Splice(){
    //array.splice(1,2,"valor");
    array.shift();
    Show;
}

function Borrar3(i){
            array.splice(i,1);

    Show();
}