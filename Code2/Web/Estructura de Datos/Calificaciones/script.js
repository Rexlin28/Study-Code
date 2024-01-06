var datos = [
    {nombre: "Sarah", calificaciones: [8,9,5,9,10], matricula: "A012481209"},
    {nombre: "Norah", calificaciones: [9,10,5,6,6], matricula: "A012481210"}
]

var res = document.getElementById("res");
//vres.innerHTML = "Hola"


Calificar();

function Calificar(){
    datos.forEach(i => {
        var hname = document.createElement("h2");
        hname.innerHTML = "Nombre:"
        var pname = document.createElement("p");
        pname.innerHTML = i.nombre;
        var promedio = 0;
        var hcalifas = document.createElement("h2");
        hcalifas.innerHTML = "Calificaciones:"
        var califas = document.createElement("ul");
        var temp = 0;
        i.calificaciones.forEach(j =>{
            var pcalifas = document.createElement("li");
            pcalifas.innerHTML = j;
            califas.appendChild(pcalifas);
            promedio += j;
            temp++;
        })
        promedio = promedio / temp;
        var hpromedio = document.createElement("h2");
        hpromedio.innerHTML = "Promedio:";
        var ppromedio = document.createElement("p");
        ppromedio.innerHTML = promedio.toString();
        var hmatricula = document.createElement("h2");
        hmatricula.innerHTML = "Matricula:";
        var pmatricula = document.createElement("p");
        pmatricula.innerHTML = i.matricula;
        pfinal = document.createElement("h1");
        pfinal.innerHTML = "****************";

       /* pmatricula.appendChild(pfinal);
        hmatricula.appendChild(pmatricula);
        ppromedio.appendChild(hmatricula);
        hpromedio.appendChild(ppromedio);
        califas.appendChild(hpromedio);
        hcalifas.appendChild(califas);
        pname.appendChild(hcalifas);
        hname.appendChild(pname);*/


        res.appendChild(hname);
        res.appendChild(pname);
        res.appendChild(hcalifas);  
        res.appendChild(califas);
        res.appendChild(hpromedio);
        res.appendChild(ppromedio);
        res.appendChild(hmatricula);
        res.appendChild(pmatricula);
        res.appendChild(pfinal);
    });
}