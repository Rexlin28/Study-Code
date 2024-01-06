var nume1;
var nume2;


function enviar(){ //Enviar
    var res = document.getElementById("resultado");
    num1= document.getElementById("txt1").value;
    num2 = document.getElementById("txt2").value;
}

function sum(){ //Sumar
    enviar();
    nume1 = parseInt(num1);
    nume2 = parseInt(num2);

    res.innerHTML = nume1 + nume2;
}

function resta(){ //Restar
    enviar();
    nume1 = parseInt(num1);
    nume2 = parseInt(num2);

    res.innerHTML = nume1 - nume2;
}

function mult(){ //Multiplicar
    enviar();
    nume1 = parseInt(num1);
    nume2 = parseInt(num2);

    res.innerHTML = nume1 * nume2;
}

function divi(){ //Divir
    enviar();
    nume1 = parseInt(num1);
    nume2 = parseInt(num2);

    res.innerHTML = nume1 / nume2;
}