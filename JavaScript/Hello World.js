document.write("<h1>Hello World</h1>");

//tipos de datos
"Hello World"
'Hello World'
var name = "John";
let lastname = "Carter";

'I am'
"I'm"

10000
-2.3
const PI=3.1416;
true
false

//array
["Joe","Ana",'Martha']
[1,1225,-32.3]
[true,false,false,true]

//object
{
    "username": "Rexlin",
    "score": "70.4",
    "time": "14",
    "pro": true,
    "friends": ["Joe","Ana",'Martha']
}

//Variables

var variable = 12341;
let nombre = "Pedro";
const euler = 2.68412;

variable = 4321;

//Operadores
var numberOne = 42;
var numberTwo = 123;
var result= numberOne + numberTwo;
console.log(result);

let name = "John";
let lastname = "Carter"
let completeName = name + " "+ lastname;
console.log(completeName); 

var OneLessThanTwo = numberOne < numberTwo;
console.log(OneLessThanTwo);
var OneEqualTwo = numberOne == numberTwo;
console.log(OneEqualTwo);
var OneDifferentThanTwo = numberOne != numberTwo;


// Condicionales

if (OneDifferentThanTwo === true){
    console.log("Awebo son diferentes xdd");
}
else (OneDifferentThanTwo === false){
    console.log("Son iguales pendejo xdd");
}

var pendejo = true;
var pitudo = false;

if (pendejo == false)
    else if (pitudo = true);
    console.log("Hay que listo y pitudo mijo")
else{
    if(pitudo== true)
    console.log("almenos tienes pitote");
    else{
        console.log("nmms que pendejo");
    }
}

//switch
let typeCard = "Debid Card";
switch(typeCard){
    case "Debid Card":
        console.log("Es de Debito");
        break;
    case "Credit Card":
        console.log("Es de Credito");
        break;
    default:
        console.log("No tienes tarjeta pendejo");
}


//Bucles
var count=50
while(count>0){
    console.log(count);
    count--;
}

let names = ["pepe, toño, alfredo, ricardo, carlos"];
let longitud = names.length;
for(let i=0; i<names.length; i++){ 
    console.log(names[i]);
}

//Funciones  ***
function greeting(name){
    console.log("Hello " + name);
}

greeting("Rigoberga");