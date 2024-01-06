var req = new XMLHttpRequest();
var url = "https://pokeapi.co/api/v2/pokemon/ditto";

req.open("GET",url);
req.send();

req.addEventListener("load", function(){
    if(req.status == 200 && req.readyState == 4){
        document.getElementById("Abilities").textContent = response.abilities;
    }else{
        document.getElementById("Abilities").textContent = "NO JALAA"
    }
});