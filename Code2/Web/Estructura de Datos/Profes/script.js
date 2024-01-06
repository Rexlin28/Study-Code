var datos = [
    {nombre: "Sarah", calificaciones: [8,9,5,9,10], matricula: "A012481209"},
    {nombre: "Norah", calificaciones: [9,10,5,6,6], matricula: "A012481210"}
]

var profesor = [
   { nombre: "Juan", grupo: [datos[0].matricula,datos[1].matricula]} 
]

function loadAlumnos(){ // Cargar alumnos
    let alumnos = document.getElementById("alumnos");
    alumnos.innerHTML = ""; 
    datos.forEach(e => {
        let alum = document.createElement("li");
        alum.innerHTML = e.nombre + " - Matrícula: " + e.matricula;
        alumnos.appendChild(alum);
    });
}
loadAlumnos();

function addAlumno(){ //Agregar alumnos a la escuela
    let nombre = document.getElementById("nombre").value;
    let matricula = document.getElementById("matricula").value;
    let cali1 = parseFloat(document.getElementById("cali1").value);
    let cali2 = parseFloat(document.getElementById("cali2").value);
    let cali3 = parseFloat(document.getElementById("cali3").value);
    let cali4 = parseFloat(document.getElementById("cali4").value);
    let cali5 = parseFloat(document.getElementById("cali5").value);

    datos.push({ nombre: nombre, calificaciones: [cali1, cali2, cali3, cali4, cali5], matricula: matricula });
    loadAlumnos();
}



function addAlumnoAlGrupo() { //Añadir alumnos al grupo del progesor
    let matriculaAlumno = document.getElementById("matriculaAlumno").value;
    
    // Buscar el alumno por matrícula en los datos
    let alumno = datos.find(alumno => alumno.matricula === matriculaAlumno);

    if (alumno) {
        profesor[0].grupo.push(matriculaAlumno);
        showProfesoresAlumnos(); 
    } else {
        alert("El alumno con matrícula " + matriculaAlumno + " no existe.");
    }
}

function showProfesoresAlumnos() { //Enseñamos los alumnos de los profesores
    let profesoresList = document.getElementById("profesores");
    profesoresList.innerHTML = ""; 

    profesor[0].grupo.forEach(matricula => {
        const alumno = datos.find(alumno => alumno.matricula === matricula);
        if (alumno) {
            let prof = document.createElement("li");
            prof.innerHTML = "Profesor: " + profesor[0].nombre + " - Alumno: " + alumno.nombre;
            profesoresList.appendChild(prof);
        } else {
            alert("No se encontró el alumno con la matrícula " + matricula);
        }
    });
}

loadAlumnos();
showProfesoresAlumnos();



function Calificar(){ //Obtener datos de los alumnos
    var res = document.getElementById("res");
    res.innerHTML = "";
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


        res.appendChild(hname); //Forma correcta de imprimirlo
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
