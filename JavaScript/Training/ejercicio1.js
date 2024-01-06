let cantidad = prompt("Ingrese la cantidad");

let costos =[50,2,42,99,142,14,42];

let grande= 0;

for(let i = 0; i < 7; ){
	if(cantidad> costos[i]){
		if(grande < costos[i]){
			grande = costos[i];
		}
	}
	i++;
}


code = `<h1> TICKET </h1>
		<p> ${cantidad} </br>
		<p> Grande: ${grande}</br>`

document.write(code);