var resultadoDiv = document.getElementById("result");

function factorial(num){ //agarra un parametro y devolvera el factorial de forma recursiva
    if(num>1){
        let res=factorial(num-1); //vuelve a llamar la misma funcion con un numero menos
        res*=num; 
        return res; // devuelve el resultado 
    }else{
        return num; // devuelve 1
    }
    
}

function result(){ //funcion que llamara a la funcion de factorial
    let numero = document.getElementById("numberInput").value;
    let num = parseInt(numero);
    let res = factorial(num); //llamar funcion factorial
    res = res / num;
    console.log(res); // imprime en consola
    resultadoDiv.innerHTML= parseInt(res);  //imprime en pantalla
}

//result(5);