// Aquí deberías incluir la lógica para obtener datos de la API de Spotify
// Authorization token that must have been created previously. See : https://developer.spotify.com/documentation/web-api/concepts/authorization
const token = 'undefined';
async function fetchWebApi(endpoint, method, body) {
  const res = await fetch(`https://api.spotify.com/${endpoint}`, {
    headers: {
      Authorization: `Bearer ${token}`,
    },
    method,
    body:JSON.stringify(body)
  });
  return await res.json();
}

async function getTopTracks(){
  // Endpoint reference : https://developer.spotify.com/documentation/web-api/reference/get-users-top-artists-and-tracks
  return (await fetchWebApi(
    'v1/me/top/tracks?time_range=long_term&limit=5', 'GET'
  )).items;
}

const topTracks = await getTopTracks();
console.log(
  topTracks?.map(
    ({name, artists}) =>
      `${name} by ${artists.map(artist => artist.name).join(', ')}`
  )
);



// Ejemplo de eventos de botones
$(document).ready(function() {
    $("#play").click(function() {
        // Lógica para reproducir/pausar la canción
    });

    $("#prev").click(function() {
        // Lógica para ir a la canción anterior
    });

    $("#next").click(function() {
        // Lógica para ir a la siguiente canción
    });

    $("#progress-bar").on("input", function() {
        // Lógica para actualizar la posición de reproducción
    });
});
