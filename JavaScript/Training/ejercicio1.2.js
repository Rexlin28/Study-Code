
let loteria = 7;
let boletos = 0;

if(cantidad>= loteria){
	if(cantidad>= 2*loteria){
		if(cantidad >= 3*loteria){
			cantidad-= (3*loteria);
			document.write(`Compro 3 boletos y devolvio ${cantidad}`);
		}else{
			cantidad-= (2*loteria);
			document.write(`Compro 2 boletos  y sobro ${cantidad}`);
		}
	}else{
		cantidad-= (loteria);
			document.write(`Compro 1 boletos  y sobro ${cantidad}`);
	}
}else{
	cantidad-= (2*loteria);
			document.write(`Compro 0 boletos  y sobro ${cantidad}`);
}