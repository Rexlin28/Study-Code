var req = new XMLHttpRequest();
var url = "https://api.nasa.gov/planetary/apod?api_key=";
var api_key = "Hy7cjrCuPDYc3rm7yuZ5jprymhiiWKXcmxFCgkGP";

req.open("GET",url + api_key);
req.send();

req.addEventListener("load",function(){
    if(req.status == 200 && req.readyState== 4 ){
        var response = JSON.parse(req.responseText);
        document.getElementById("title").textContent = response.title;
        document.getElementById("date").textContent = response.date;
        document.getElementById("apod-image").src = response.hdurl;
        document.getElementById("explanation").textContent = response.explanation;
    }else{
        document.getElementById("title").textContent = "NO JALA";
        document.getElementById("date").textContent = "NO JALAA";
        document.getElementById("apod-image").src = "NO JALAAA";
        document.getElementById("explanation").textContent = "NO JALAAAA";
    }
});