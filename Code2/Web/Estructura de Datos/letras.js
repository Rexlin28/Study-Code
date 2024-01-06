
var media;
function palabras(){
    media = parseInt(txt1) - parseInt(txt2);
    for(let i=parseInt(txt1); i<media; i++){
        res.innerHTML = lorem[i];
    }
}

function cargar(){
    var res = document.getElementById("resultado");
    var lore = document.getElementById("lorem").value;
    var txt1 = document.getElementById("txt1").value;
    var txt2 = document.getElementById("txt2").value;
}